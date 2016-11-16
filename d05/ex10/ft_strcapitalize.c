/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 13:08:58 by myoung            #+#    #+#             */
/*   Updated: 2016/08/16 21:59:28 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				is_a_word_char(char c);

/*
** wordchar is a latin letter, or a number.
** make a function to check a char if it fits that build
** check the first character of the string,
** if it is a wordchar and is lower case, make it uppercase
** check the rest of the string till the end as follows:
**  if the prev char was NOT a wordchar and this one is:
**   and the char here is not a number, uppercase
**  if the prev char WAS a wordchar and this one is too:
**   check if it is uppercase
**   if it is, make it lowercase.
**  check the rest of the string like that,
** then return our string.
*/

char			*ft_strcapitalize(char *str)
{
	int		i;

	i = 1;
	if (is_a_word_char(str[0]) == 1 && (str[0] >= 'a' && str[0] <= 'z'))
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (is_a_word_char(str[i - 1]) == 0 && is_a_word_char(str[i]) == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] >= '0' && str[i] <= '9' ? str[i] : str[i] - 32;
		}
		if (is_a_word_char(str[i - 1]) == 1 && is_a_word_char(str[i]) == 1)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] >= '0' && str[i] <= '9' ? str[i] : str[i] + 32;
		}
		i++;
	}
	return (str);
}

int				is_a_word_char(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
