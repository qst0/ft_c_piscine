/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 21:01:43 by myoung            #+#    #+#             */
/*   Updated: 2016/08/21 22:58:39 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** match
** takes in two strings, checking if they match
** if s2 contains a star, we can replace it whit any string
** (even empty) to make s1 and s2 identical
** s2 may have as many stars as you would like
** for example
** main.c and *.c would returh a 1
**
** while current value of s2 is a star and not end of string
** 		move ahead until we have a character that isn't a star
** while the current value s2 isn't a star and not end of string
** 		while s1 and s2 don't match and not end of string
**			move ahead in s1 till we find a match or end of string
** 		if we are at the end of string
** 			return (1), because they match
** 		else we found a match
** 			s2++
** 			call match again with s1 and s2
** 		//  // //return (1)
** 	while s2 is not a * and we are not at the end of s1 or s2
** 		strcmp s1 and s2
** 		if it is invalid
** 			return (0)
** 		else
** 			s1++
** 			s2++
** 	else return (0)
*/

int			match(char *s1, char *s2)
{
	while (*s2 == '*' && (*s1 != '\0' && *s2 != '\0'))
		s2++;
	while (*s2 != '*' && (*s1 != '\0' && *s2 != '\0'))
	{
		while (*s1 != *s2 && (*s1 != '\0' && *s2 != '\0'))
			s1++;
		if (*s1 == '\0' && *s2 == '\0')
			return (1);
		else
		{
			s2++;
			return (match(s1, s2));
		}
	}
	while (*s2 != '*' && (*s1 != '\0' && *s2 != '\0'))
	{
		while (*s1 == *s2 && (*s1 != '\0' && *s2 != '\0'))
		{
			s1++;
			s2++;
		}
		if (*s2 == '*')
			return (1);
	}
	return (0);
}
