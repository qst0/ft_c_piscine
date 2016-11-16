/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 17:59:29 by myoung            #+#    #+#             */
/*   Updated: 2016/08/18 19:17:53 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define AM(x) (x==12 && x!=0 && x!=24 ? "P.M. " : "A.M. ")

void		ft_takes_place(int hour)
{
	if (hour < 0 || hour > 23)
		return ;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d", hour % 12 == 0 ? 12 : hour % 12);
	printf(".00 %s", AM(hour));
	hour++;
	printf("AND %d", hour % 12 == 0 ? 12 : hour % 12);
	printf(".00 %s\n", AM(hour));
}
