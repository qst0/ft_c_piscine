/*
** Welcome to Mason Main Day07
*/

#include "ex00/ft_strdup.c"
#include "ex01/ft_range.c"
#include "ex02/ft_ultimate_range.c"
#include <string.h>
#include <stdio.h>
#include <unistd.h>

int			ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

void	ex00()
{
	char	*something;
	something = "something";
	printf("Lib: %s\n", strdup(something));
	printf("You: %s\n", ft_strdup(something));
}

void ex01()
{
	int		*range;
	int		size;
	int		i;
	int		max;
	int		min;

	i = 0;
	min = 99;
	//max = -1;
	max = 200;
	size = max - min;
	range = ft_range(min, max);
	while(i < size)
	{
		printf("%d ",range[i]);
		i++;
	}
	if(!range)
		printf("Yo it's null\n");
}

void ex02()
{
	int		**range;
	int		size;
	int		i;
	int		max;
	int		min;

	i = 0;
	min = -10;
	max = -20;
	//range = 0;

	size = max - min;
	printf("Size  : %d\n", size);
	printf("Return: %d\n", ft_ultimate_range(range, min, max));
	while(i < size)
	{
		printf("%d\n", range[0][i]);
		i++;
	}
	if(!range)
		printf("Yo it's null\n");
}

#include "ex03/ft_concat_params.c"
void ex03()
{
	int argc = 5;
	char *argv[argc];
	argv[0] = "songsyamamadancesto.out";
	argv[1] = "whoop";
	argv[2] = "there";
	argv[3] = "it";
	argv[4] = "is";
	printf("%s\n",ft_concat_params(argc, argv));
}

#include "ex04/ft_split_whitespaces.c"
void	ex04_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
		ft_putchar(*(str + i++));
}

void ex04()
{
	char	**words;
	words = ft_split_whitespaces("  this has \n four \t words   ");
	while(*words != 0)
	{
		ex04_putstr(*words);
		ft_putchar('\n');
		words++;
	}
}

#include "ex05/ft_print_words_tables.c"
void ex05()
{
	char	**words;
	
	words = ft_split_whitespaces("  this has \n four \t words   ");
	ft_print_words_tables(words);
}

int			main(int argc, char** argv)
{
	if (argc == 1)
		printf("%s\nusage:\tplease enter the ex# you want to run.\n", argv[0]);
	else
	{
		if (strcmp("0",argv[1]) == 0)
			ex00();
		if (strcmp("1",argv[1]) == 0)
			ex01();
		if (strcmp("2",argv[1]) == 0)
			ex02();
		if (strcmp("3",argv[1]) == 0)
			ex03();
		if (strcmp("4",argv[1]) == 0)
			ex04();
		if (strcmp("5",argv[1]) == 0)
			ex05();
		return (0);
	}
}
