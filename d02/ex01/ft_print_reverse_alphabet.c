/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 15:49:57 by myoung            #+#    #+#             */
/*   Updated: 2016/08/11 13:38:13 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_reverse_alphabet(void)
{
	char current_letter;

	current_letter = 'z';
	while (current_letter >= 'a')
		ft_putchar(current_letter--);
}
