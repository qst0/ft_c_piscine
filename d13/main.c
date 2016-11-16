#include "ex05/ft_btree.h"
#include <stdio.h>

void	tree_print(void *item)
{
	printf("%s\n", (char*)item);
}

int			ft_strcmp(void *s1, void *s2)
{
	unsigned char	s1_value;
	unsigned char	s2_value;
	int				i;

	i = 0;
	s1 = (char*)s1;
	s2 = (char*)s2;
	while (s1[i] == s2[i] && s1[i] != 0)
		i++;
	s1_value = s1[i];
	s2_value = s2[i];
	return (s1_value - s2_value);
}

int		main()
{
	t_btree *tester;
	void	(*func)(void*);
	void	(*cmp)(void *, void *);

	func = &tree_print;
	cmp = &ft_strcmp;
	tester = btree_create_node("Something");
	btree_insert_data(&tester, "new", cmp);  
	btree_apply_prefix(tester, func);
	btree_apply_infix(tester, func);
	btree_apply_suffix(tester, func);
	return (0);
}
