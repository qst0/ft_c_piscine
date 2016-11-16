/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 13:17:51 by kyork             #+#    #+#             */
/*   Updated: 2016/08/16 20:35:22 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	g_test[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit."
"Fusce sit amet porta dui."
"\x00\x01\x02\x03\x04\x05\x06\x07\x08\x0b\x0e\x0f"
"\x1b\x7f";

char	g_test2[] = "I̶͔̭̜n̦͉̭͔vok̛in͖͍͎̖g͈̪ ̬̙̭̮̬ṭ͚́h͔e̖ ͜f̺̮͉̭è̠̱e͔͓ļ̤̖i̠͇̬̪̳n͕͚̘̝g ̫̠̗͚͔̲\x20\0\0\0\0\0\0\0\0\0\0\0\0"
"\0\0\0\0o̜̮̣ͅf̸̭̗̫̞͉̝ ̼̩̻̹̱̜c̦̰̻̣̭͡ḥ̣̙̺͇̬a̮̞͇ͅo̦̰s̞̤͢.̧̩̤͕";

void	*ft_print_memory(void *addr, unsigned int size);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	void	*addr;

	addr = ft_print_memory(g_test, sizeof(g_test) - 1);
	if (addr != g_test)
		printf("FAIL retval\n");
	printf("\n");
	addr = ft_print_memory(g_test2, sizeof(g_test2) - 1);
	if (addr != g_test2)
		printf("FAIL retval\n");
}
