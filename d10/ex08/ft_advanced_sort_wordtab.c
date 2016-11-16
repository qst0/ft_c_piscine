/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 22:27:24 by myoung            #+#    #+#             */
/*   Updated: 2016/08/23 22:29:30 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	quick_f(char **array, int start, int end, int (*cmp)(char *, char *))
{
	int		left;
	int		right;
	char	*pivot;

	if (start < end)
	{
		left = start + 1;
		right = end;
		pivot = array[start];
		while (left < right)
		{
			if (cmp(array[left], pivot) <= 0)
				left++;
			else if (cmp(array[right], pivot) >= 0)
				right--;
			else
				ft_swap(&array[left], &array[right]);
		}
		if (cmp(array[left], pivot) < 0)
			ft_swap(&array[left--], &array[start]);
		else
			ft_swap(&array[--left], &array[start]);
		quick(array, start, left);
		quick(array, right, end);
	}
}

void	ft_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;

	i = 0;
	while (tab[i] != 0)
		i++;
	quick_f(tab, 0, i - 1, cmp);
}
