/*
** Mason Main Day11
** Linked Lists
*/
#include <stdio.h>
#include <string.h>
#include "ex06/ft_list.h"

// ex00 ft_create_elem
#include "ex00/ft_create_elem.c"
void		ex00()
{
	t_list		*element;
	int 		data;
	int			*p_data;

	data = 42;
	p_data = &data;
	element = ft_create_elem(p_data);
	printf("Checking ex00 for 42: %d\n", *(int*)(element->data));
	printf("size: %d\n", ft_list_size(element));
}

// ex01 ft_list_push_back
#include "ex01/ft_list_push_back.c"
void		ex01()
{
	t_list		*head;
	int			data;
	int			*p_data;
	int			data_2;
	int			*p_data_2;
	
	data = 4;
	data_2 = 2;
	p_data = &data;
	p_data_2 = &data_2;
	head = 0;
	ft_list_push_back(&head, p_data);
	ft_list_push_back(&head, p_data_2);
	printf("Checking ex01 for 42: %d%d\n",
			*(int*)(head->data),
			*(int*)head->next->data);
}

// ex02 ft_list_push_front
#include "ex02/ft_list_push_front.c"
void		ex02()
{
	t_list		*head;
	int			data;
	int			*p_data;
	int			data_2;
	int			*p_data_2;
	
	data = 4;
	data_2 = 2;
	p_data = &data;
	p_data_2 = &data_2;
	head = 0;
	ft_list_push_front(&head, p_data);
	while (data_2++ < 41)
		ft_list_push_front(&head, p_data_2);
	printf("Checking ex02 for 42: %d\n", *(int*)(head->data));
}

// ex03 ft_list_size
#include "ex03/ft_list_size.c"
void		ex03()
{
	t_list		*head;
	int			data;
	int			*p_data;
	int			data_2;
	int			*p_data_2;
	
	data = 4;
	data_2 = 1;
	p_data = &data;
	p_data_2 = &data_2;
	head = 0;
	ft_list_push_back(&head, p_data);
	while (data_2++ < 42)
		ft_list_push_front(&head, p_data_2);
	printf("Checking ex03 for 42: %d\n", ft_list_size(head));
}

// ex04 ft_list_last
#include "ex04/ft_list_last.c"
void		ex04()
{
	t_list		*head;
	int			data;
	int			*p_data;
	int			data_2;
	int			*p_data_2;
	
	head = 0;
	data = 42;
	data_2 = -1;
	p_data = &data;
	p_data_2 = &data_2;
	ft_list_push_front(&head, p_data);
	ft_list_push_front(&head, p_data_2);
	printf("Checking ex04 for 42: %d\n", *(int*)((ft_list_last(head))->data));
	printf("Checking ex04 for null: %p\n", ft_list_last(0));
}

// ex05 ft_list_push_params.c
// ./a.out 5 this should print fourty-two
#include "ex05/ft_list_push_params.c"
void		ex05(int argc, char **argv)
{
	t_list		*head;
	
	head = 0;
	head = ft_list_push_params(argc, argv);
	printf("Check ex05 for last param entered: %s\n", (char*)head->data);
}

// ex06 ft_list_clear.c
#include "ex06/ft_list_clear.c"
void		ex06()
{
	t_list		*head;
	int			*p_data;
	int			data_2;
	int			*p_data_2;
	
	data_2 = 2;
	p_data_2 = &data_2;
	head = 0;
	ft_list_push_back(&head, "a");
	while (data_2++ < 44)
	{
		p_data = malloc(sizeof(int));
		*p_data = data_2;
		ft_list_push_front(&head, p_data);
	}
	ft_list_clear(&head);
	if(head)
		printf("Um... head isn't null.\n");
	else
		printf("LIST CLEARED: Where is my head?\n");
}
int			main(int argc, char **argv)
{
	if(argc == 1)
		return (0);
	if(strcmp(argv[1],"00") == 0 || strcmp(argv[1],"0") == 0)
		ex00();
	if(strcmp(argv[1],"01") == 0 || strcmp(argv[1],"1") == 0)
		ex01();
	if(strcmp(argv[1],"02") == 0 || strcmp(argv[1],"2") == 0)
		ex02();
	if(strcmp(argv[1],"03") == 0 || strcmp(argv[1],"3") == 0)
		ex03();
	if(strcmp(argv[1],"04") == 0 || strcmp(argv[1],"4") == 0)
		ex04();
	if(strcmp(argv[1],"05") == 0 || strcmp(argv[1],"5") == 0)
		ex05(argc, argv);
	if(strcmp(argv[1],"06") == 0 || strcmp(argv[1],"6") == 0)
		ex06();
}
