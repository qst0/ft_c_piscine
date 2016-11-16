#include <stdio.h>


#include "ex00/ft_iterative_factorial.c"
void		test00()
{
	printf("ex00: Err %d\n", ft_iterative_factorial(13));
	printf("ex00: !12 %d\n", ft_iterative_factorial(12));
	printf("ex00: !11 %d\n", ft_iterative_factorial(11));
}


#include "ex01/ft_recursive_factorial.c"
void		test01()
{
	printf("ex01: Err %d\n", ft_recursive_factorial(13));
	printf("ex01: !12 %d\n", ft_recursive_factorial(12));
	printf("ex01: !11 %d\n", ft_recursive_factorial(11));
}

#include "ex02/ft_iterative_power.c"
void		test02()
{
	printf("ex02:      5^5 = %d\n", ft_iterative_power(5,5));
	printf("ex02:     5^-5 = %d\n", ft_iterative_power(5,-5));
	printf("ex02:     10^5 = %d\n", ft_iterative_power(10,5));
	printf("ex02:      5^0 = %d\n", ft_iterative_power(5,0));
}

#include "ex03/ft_recursive_power.c"
void		test03()
{
	printf("ex03:      5^5 = %d\n", ft_recursive_power(5,5));
	printf("ex03:     5^-5 = %d\n", ft_recursive_power(5,-5));
	printf("ex03:     10^5 = %d\n", ft_recursive_power(10,5));
	printf("ex03:      5^0 = %d\n", ft_recursive_power(5,0));
}

#include "ex04/ft_fibonacci.c"
void		test04()
{
	printf("ex04: %d\n", ft_fibonacci(-1));
	printf("ex04: %d\n", ft_fibonacci(4));
	printf("ex04: %d\n", ft_fibonacci(5));
}

#include "ex05/ft_sqrt.c"
void		test05()
{
	printf("ex05: %d\n", ft_sqrt(16));
	printf("ex05: %d\n", ft_sqrt(2147395600));
	printf("ex05: %d\n", ft_sqrt(81));
	printf("ex05: %d\n", ft_sqrt(4));
	printf("ex05: %d\n", ft_sqrt(0));
	printf("ex05: %d\n", ft_sqrt(-42));
}

#include "ex06/ft_is_prime.c"
void		test06()
{
	printf("ex06: %d\n", ft_is_prime(-3));
	printf("ex06: %d\n", ft_is_prime(4));
	printf("ex06: %d\n", ft_is_prime(3));
	printf("ex06: %d\n", ft_is_prime(181));
	printf("ex06: %d\n", ft_is_prime(179));
	printf("ex06: %d\n", ft_is_prime(2147483647));
}

#include "ex07/ft_find_next_prime.c"
void		test07()
{
	printf("ex07: %d\n", ft_find_next_prime(4));
	printf("ex07: %d\n", ft_find_next_prime(179));
	printf("ex07: %d\n", ft_find_next_prime(160));
	printf("ex07: %d\n", ft_find_next_prime(2147483600));
	printf("ex07: %d\n", ft_find_next_prime(-5));
}

int			main()
{
	//test00();
	//test01();
	//test02();
	//test03();
	test04();
	//test05();
	//test06();
	//test07();

	return (0);
}
