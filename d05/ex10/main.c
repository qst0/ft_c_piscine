/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 11:31:15 by kyork             #+#    #+#             */
/*   Updated: 2016/08/16 14:10:51 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char buf[100];

	strcpy(buf,
			"salut, comment tu vas ? 42mots quarante-deux; cin3quante+et+un");
	printf("%s\n", ft_strcapitalize(buf));
	strcpy(buf, "salut, comment tu vas "
			"? 42mots quaRante-Deux; ?a ?B cin?quante+et+un");
	printf("%s\n", ft_strcapitalize(buf));
	printf("MANUAL INSPECT\n");
}
