/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex007.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moxu <dairenkonmajime@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 01:23:38 by moxu              #+#    #+#             */
/*   Updated: 2022/09/19 03:51:44 by moxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Make a program to prompt the user for a number between 0 and 99 and display
this number in full. If the user enters a number that is not in this range,
show: "invalid number"

This function won't pass the norminette of 42.
*/
#include <stdio.h>

void	number_in_full_below_10(int integer_number);
void	number_in_full_above_10(int integer_number, int division_rest_number);

int	main(void)
{
	int	number;
	int	division_rest;
	int	decimal_number;

	printf("Input an integer number between 0 and 99: ");
	scanf("%d", &number);
	if (number <= 10)
	{
		number_in_full_below_10(number);
	}
	else if (number > 99)
	{
		printf("Your number is invalid! \n");
	}
	else
	{
		division_rest = number % 10;
		decimal_number = number / 10 * 10;
		number_in_full_above_10(decimal_number, division_rest);
	}
	return (0);
}

void	number_in_full_below_10(int integer_number)
{
	int		i;
	int		number_array_unt_10 [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	const char	*number_full_unt_10[] = {"Um", "Dois", "Três",
		"Quatro", "Cinco",
		"Seis", "Sete", "Oito", "Nove", "Dez"};

	if (integer_number <= 10)
	{
		i = 0;
		while (i < 10)
		{
			if (number_array_unt_10[i] == integer_number)
			{
				printf("Your number is %s. \n", number_full_unt_10[i]);
			}
			i++;
		}
	}
}

void	number_in_full_above_10(int integer_number, int division_rest_number)
{
	int		i;
	int		z;
	int		number_array_10_in_10 [] = {20, 30, 40, 50, 60, 70, 80, 90};
	int		number_array_unt_10 [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	const char	*number_full_10_in_10 [] = {"Vinte", "Trinta", "Quarenta",
											"Cinquenta", "Sessenta", "Setenta",
											"Oitenta", "Noventa"};
	const char	*number_full_unt_10[] = {"Um", "Dois", "Três",
										"Quatro", "Cinco", "Seis",
										"Sete", "Oito", "Nove", "Dez"};

		i = 0;
	while (i < 8)
	{
		if (number_array_10_in_10[i] == integer_number)
		{
			if (division_rest_number > 0)
			{
				z = 0;
				while (z < 10)
				{
					if (number_array_unt_10[z] == division_rest_number)
					{
						printf("Your number is %s e %s. \n",
							number_full_10_in_10[i], number_full_unt_10[z]);
					}
					z++;
				}
			}
			else
			{
				printf("Your number is %s. \n", number_full_10_in_10[i]);
			}
		}
		i++;
	}
}
