
/* DAY 10 TESTING */

#include <stdio.h>
// EXERCISE 01 FT_FOREACH

#include "ex01/ft_foreach.c"
void		ft_putnbr(int nbr);
void		ft_putchar(char c);

void		ex01()
{		
	int		tab[9] = {41,42,43,54,85,96,70,87,911};
	void	(*f)(int);

	f	=	&ft_putnbr;
	ft_foreach(tab, 9, f);
}

// EXERCISE 02 FT_MAP

int			ft_is_odd(int nbr)
{
	return (nbr % 2);
}

#include "ex02/ft_map.c"

void		ex02()
{
	int		tab[9] = {1,2,3,4,5,6,7,8,9};
	int		(*f)(int);
	void	(*f2)(int);

	f	=	&ft_is_odd;
	f2	=	&ft_putnbr;
	ft_foreach(ft_map(tab, 9, f), 9, f2);
}

// EXERCISE 03 FT_ANY
#include "ex03/ft_any.c"
int			ft_strlen(char* str);

void		ex03()
{
	int		(*f)(char*);
	char	*tab[5] = {"these","are","too","long", 0};
	char	*tab2[6] = {"this", "last", "one", "is not", "!", 0};

	f = &ft_strlen;	
	ft_putnbr(ft_any(tab, f));
	ft_putnbr(ft_any(tab2, f));
}

// EXERCISE 04 FT_COUNT_IF
#include "ex04/ft_count_if.c"

void		ex04()
{
	int		(*f)(char*);
	char	*tab[5] = {"t","h","i","s", 0};
	char	*tab2[7] = {"this", "should", "return", "two", "!", "!", 0};

	f = &ft_strlen;	
	ft_putnbr(ft_count_if(tab, f));
	ft_putnbr(ft_count_if(tab2, f));
}

// EXERCISE 05 FT_IS_SORT
#include "ex05/ft_is_sort.c"

int			ft_minus(int nbr1, int nbr2)
{
	return (nbr1 - nbr2);
}

void		ex05()
{	
	int		tab[9] = {1,2,3,4,5,6,7,8,9};
	int		tab2[9] = {9,8,7,6,5,4,3,2,1};
	int		(*f)(int, int);

	f	=	&ft_minus;
	ft_putnbr(ft_is_sort(tab, 9, f));
	ft_putnbr(ft_is_sort(tab2, 9, f));
}

// THE MAIN FUNCTION

int			main(int argc, char **argv)
{
	ex01();
	//ex02();
	//ex03();
	//ex04();
	//ex05();
	//ex06();
}
