/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 22:54:27 by myoung            #+#    #+#             */
/*   Updated: 2016/08/14 22:59:58 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int		main()
{
	int input;
	int howtall;
	int howtallindex = input;
	int current_ledge_offset;
	int current_row;
	int current_tier;
	int ledge_count;
	int nextledgesize;
	int ledge_offset;
	int base_width;
	int current_offset;

	input = 3;
	howtall = 3;
	ledge_count = input - 1;	
	base_width = ((howtall * 2) + 1) + (ledge_offset * 2);

	while(howtallindex > 1)
	{
		howtall = howtall + (howtall +1);
		howtallindex--;
	}

	nextledgesize = ((input) + 3) / 2;
	ledge_offset = 0;
	
	int i;	
	i = ledge_count;
	while(i > 0)
	{
		ledge_offset = ledge_offset + (((i) + 3) / 2);
		i--;
	}

	current_row = 1;
	current_tier = 0;
	current_ledge_offset = 0;
	current_offset = (( base_width / 2 ) - current_row) - current_ledge_offset;
	
}

void		sas_output(void){
	while(current_row <= howtall)
	{
		int width = base_width;
		while(width > 0)
		{
			width--;
		}
		current_row++;
	}
	return (1);
}
