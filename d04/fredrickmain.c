/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaudet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 13:01:50 by fgaudet           #+#    #+#             */
/*   Updated: 2016/08/13 21:32:51 by fgaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
//Put your main in the folder Dxx (xx is the day you are in)
//When gcc add all file in ex,
//Comment every function not working or incomplete from the person
int		ft_iterative_factorial(int nb);
int		ft_recursive_factorial(int nb);
int		ft_iterative_power(int nb, int power);
int		ft_recursive_power(int nb, int power);
int		ft_fibonacci(int index);
int		ft_sqrt(int nbr);
//int		ft_is_prime(int nb);v
int		ft_find_next_prime(int nb);

int		main(void)
{
	int		value;
	int		ex;
	int		last_ex;
	
	//Put down last exercise here (0 based)
	last_ex = 9;
	ex = 0;
	/*	-1 or CTRL+C to exit
	**	add exercice 
	**	just comment which exercice the person stop at
	*/
	while ( ex != -1 )
	{
		printf("Which exercice you wanna test?(-1 for exit) ");
		scanf("%d",&ex);
		//ex00 Here a exemple, you just have to make it work with your exercise
		if (ex == 0)
		{
			printf("======= Exercice 00 =======\nFactorial ? ");// First showing the exercise
			scanf("%d", &value);//Scan the value the user input
			printf("The value for ex00 : %d\n", value);//Show to the user his input
			printf("00 Factorial %d = %d\n", value, ft_iterative_factorial(value));//Return the value required and showing up to the user
		}
		//ex01
		else if (ex == 1)
		{
			printf("======= Exercise 01 =======\nFactorial ? ");
			scanf("%d", &value);
			printf("The value for ex01 : %d\n", value);
			printf("01 Factorial %d = %d\n", value, ft_recursive_factorial(value));
		}
		//ex02
		else if (ex == 2)
		{
			int		power;

			printf("======= Exercise 02 =======\nNumber ? ");
			scanf("%d", &value);
			printf("Power to ? ");
			scanf("%d", &power);
			printf("The value for ex02 : %d power to %d\n", value, power);
			printf("02  %d power to %d =  %d\n", value, power, ft_iterative_power(value, power));
		}
		//ex03
		else if (ex == 3)
		{
			int		power;

			printf("======= Exercise 03 =======\nNumber ? ");
			scanf("%d", &value);
			printf("Power to ? ");
			scanf("%d", &power);
			printf("The value for ex03 : %d power to %d\n", value, power);
			printf("03  %d power to %d =  %d\n", value, power, ft_recursive_power(value, power));
		}
		//ex04
		else if (ex == 4)
		{
			printf("======= Exercise 04 =======\nFibonacci index ? ");
			scanf("%d", &value);
			printf("The value for ex04 : %d\n", value);
			printf("04 Fibonacci %d = %d\n", value, ft_fibonacci(value));
		}
		//ex05
		else if (ex == 5)
		{
			printf("======= Exercise 05 =======\nSquare root? ");
			scanf("%d", &value);
			printf("The value for ex05 : %d\n", value);
			printf("05 your %d exercise give me %d (if 0 it is not a perfect square root)\n", value, ft_sqrt(value));
		}
		//ex06
		/*
		else if (ex == 6)
		{
			printf("======= Exercise 06 =======\nPrime number ");
			scanf("%d", &value);
			printf("The value for ex06 : %d\n", value);
			printf("06 your %d exercise give me %d (1=prime 0=notprime)\n", value, ft_is_prime(value));
		}*/
		//ex07
		else if (ex == 7)
		{
			printf("======= Exercise 07 =======\nPrime number ");
			scanf("%d", &value);
			printf("The value for ex07 : %d\n", value);
			printf("The next prime is %d\n", ft_find_next_prime(value));
		}
		//If the person enter a exercice that doesn't exist
		else if (ex > last_ex)
		{
			printf("Please enter a value between 0 and %d (-1 to exit)", last_ex);
			scanf("%d", &ex);
		}
		printf("\n\n");
	}
	//End of loop
	printf("Exiting\n");
	return (0);
}
