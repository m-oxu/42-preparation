/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex004.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moxu <dairenkonmajime@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 20:16:19 by moxu              #+#    #+#             */
/*   Updated: 2022/09/17 21:47:50 by moxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Make a program to receive integer values X, Y, and Z from the user
and determine if these values can form the sides of a triangle. If so,
state whether the triangle is equilateral, isosceles, or scalene.
*/
#include <stdio.h>

int	abs_f(int first_value, int second_value);
int	is_a_triangle(int frst_sd, int sec_sd, int thir_sd);

int	main(void)
{
	int	frst_sd;
	int	sec_sd;
	int	thir_sd;

	printf("Input three integer numbers: ");
	scanf("%d %d %d", &frst_sd, &sec_sd, &thir_sd);
	if (is_a_triangle(frst_sd, sec_sd, thir_sd))
	{
		if (frst_sd != sec_sd && sec_sd != thir_sd && frst_sd != thir_sd)
		{
			printf("You have an scalene triangle!\n");
		}
		else if (frst_sd == sec_sd || sec_sd == thir_sd || thir_sd == frst_sd)
		{
			printf("You have an isosceles triangle!\n");
		}
		else
		{
			printf("You have an equilateral triangle!\n");
		}
	}
	else
	{
		printf("This is not a triangule.\n");
	}
	return (0);
}

/*This function is gonna get the absolute value of a number.

	x * (
		(x is bigger than 0? if True, 1 if False, 0) - (x is lesser than 0?)
		)

	The point is to multiply the number by -1 if number is < 0
	to make this number a positive number
*/
int	abs(int first_value, int second_value)
{
	int	final_number;
	int	one_or_minus_one;
	int	input_value;

		input_value = first_value - second_value;
	one_or_minus_one = ((input_value > 0) - (input_value < 0));
	final_number = one_or_minus_one * input_value;
	return (final_number);
}

int	is_a_triangle(int frst_sd, int sec_sd, int thir_sd)
{
	int	ft_cond;
	int	sc_cond;
	int	trd_cond;

	return (abs(sec_sd, thir_sd) < frst_sd && frst_sd < (sec_sd + thir_sd)
		&& abs(frst_sd, thir_sd) < sec_sd && sec_sd < (frst_sd + thir_sd)
		&& abs(frst_sd, thir_sd) < thir_sd && thir_sd < (frst_sd + sec_sd));
}
