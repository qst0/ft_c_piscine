/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 18:28:38 by myoung            #+#    #+#             */
/*   Updated: 2016/08/13 20:21:50 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			test_sqrt(int nb, int guess);
int			better_guess(int nb, int guess);
int			ft_sqrt(int nb);

int			ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	return (test_sqrt(nb, 1));
}

int			test_sqrt(int nb, int guess)
{
	if (guess * guess == nb)
		return (guess);
	return (test_sqrt(nb, better_guess(nb, guess)));
}

int			better_guess(int nb, int guess)
{
	return ((guess + nb / guess) / 2);
}
