/*
** Welcome to Mason Main Day08
*/

#include <string.h>
#include <stdio.h>
#include <unistd.h>

int			day08_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

void	day08_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
		day08_putchar(*(str + i++));
}

// Example 00 - ft_split_whitespaces

#include "ex00/ft_split_whitespaces.c"
void ex00()
{
	char	**words;
	//words = ft_split_whitespaces("                                         ");
	//words = ft_split_whitespaces("\t \t ");
	words = ft_split_whitespaces("  this has \n four \t words   ");
	while(*words != 0)
	{
		day08_putstr(*words);
		day08_putchar('\n');
		words++;
	}

	words = ft_split_whitespaces("  this has \n four \t words   ");
	while(*words != 0)
	{
		day08_putstr(*words);
		day08_putchar('\n');
		words++;
	}
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
			//ex01();
		if (strcmp("2",argv[1]) == 0)
			//ex02();
		if (strcmp("3",argv[1]) == 0)
			//ex03();
		if (strcmp("4",argv[1]) == 0)
			//ex04();
		if (strcmp("5",argv[1]) == 0)
			//ex05();
		return (0);
	}
}
