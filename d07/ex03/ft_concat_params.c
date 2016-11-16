/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 17:52:21 by myoung            #+#    #+#             */
/*   Updated: 2016/08/18 22:13:13 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** NEEDS UPDATED PSUEDO CODE ft_concat_params (int argc, char **argv)
** int i, int j, int length, char* result;
** We will need to count the length of all of the arguments
** So while i is less than argc, loop through the arguments
**  while j is not the '\0' end of string char
**   length++
**   j++
**  reset j to 0
**  i++;
** now that we know how many chars long all of our arguments are combined
** malloc our return *char result with the length plus 1, for the '\0'
** strcat, written inline, each of our argv onto the result char*
** return the result.
*/

#include <stdlib.h>

char		*work_concat_params(char *result, char **argv, int argc);
int			ft_argv_char_count(char **argv, int argc);

char		*ft_concat_params(int argc, char **argv)
{
	char	*result;
	int		length;

	length = ft_argv_char_count(argv, argc);
	result = (char*)malloc(sizeof(char) * (length + (argc - 1)));
	result = work_concat_params(result, argv, argc);
	return (result);
}

int			ft_argv_char_count(char **argv, int argc)
{
	int		i;
	int		j;
	int		length;

	i = 1;
	j = 0;
	length = 0;
	if (argc < 2)
		return (0);
	while (i < argc)
	{
		while (argv[i][j++] != '\0')
			length++;
		j = 0;
		i++;
	}
	return (length);
}

/*
** let's set up some iterators, i a_i and r_i
** set i = 0;
** while i < argc, so while we still have args.
**  set a_i and r_i to 0
**  while our current result postion isn't the end of string
**   move down the line
**  while the argv[i] at [a_i] is not '\0'
**   set result[r_i] to argv[i] at [a_i]
**   iterate a_i and r_i
**  then set that position to a new line '\n'
**  if i is not the same as argc, meaning we are not at the last arg
**   iterate i, and set the result at the r_i plus 1 equal to '\0'
**  else
**   set the result at the r_i we are at to '\0'
*/

char		*work_concat_params(char *result, char **argv, int argc)
{
	int i;
	int a_i;
	int r_i;

	i = 0;
	while (i < argc)
	{
		a_i = 0;
		r_i = 0;
		while (result[r_i] != '\0')
			r_i++;
		while (argv[i][a_i] != '\0')
			result[r_i++] = argv[i][a_i++];
		result[r_i] = '\n';
		if (i++ != argc - 1)
			result[r_i + 1] = '\0';
		else
			result[r_i] = '\0';
	}
	return (result);
}
