/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex005.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moxu <dairenkonmajime@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 21:50:44 by moxu              #+#    #+#             */
/*   Updated: 2022/09/18 15:26:49 by moxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Make a program that takes 3 non-integer values from the user and displays
the largest of them, the smallest of them, and the intermediate value.
*/
#include <stdio.h>

float	array_sorting_algorithm(float inputed_array[3], int size_array);

int	main(void)
{
	float	three_numbers[3];
	int		size_array;
	int		i;
	int		z;

	size_array = 3;
	i = 0;
	z = 0;
	while (i < size_array)
	{
		printf("Please, input one non-integer values: ");
		scanf("%f", &three_numbers[i]);
		i++;
	}
	array_sorting_algorithm(three_numbers, size_array);
	while (z < size_array)
	{
		printf("\nThe %dth place is %.1f. \n", z + 1, three_numbers[z]);
		z++;
	}
	return (0);
}

float	array_sorting_algorithm(float inputed_array[3], int size_array)
{
	int		i;
	int		z;
	char	support_var;

	i = 0;
	while (i < size_array)
	{
		z = size_array - 1;
		while (z != i)
		{
			if (inputed_array[i] < inputed_array[z])
			{
				support_var = inputed_array[i];
				inputed_array[i] = inputed_array[z];
				inputed_array[z] = support_var;
			}
			z--;
		}
		i++;
	}
	return (inputed_array[3]);
}
/*
This code uses a sorting algorithm called Selection Sort Algorithm.
When given an array [a, b, c, d, e, f]:

	array = [10, 20, 30, 40]
			 0    1   2   3

			if array[0] < array[3]
				|--> [40, 20, 30, 10]
				  	if array[1] < array[2]
				  		|--> [40, 30, 20, 10]

The process is for each indexed number of the array, he compares him
with all the numbers from finish to the point where the first index
is bigger than the second, when the array is odd. It goes all the way
when it's even.

If an array[10] is sorted in crescent order, it goes like this:

array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
		 0  1  2  3, 4, 5, 6, 7, 8, 9

		array[0] < array[9] --> yes --> [10, 2, 3, 4, 5, 6, 7, 8, 9, 1]
						.
		array[0]		.
						.
		array[1] < array[8] --> yes --> [10, 9, 3, 4, 5, 6, 7, 3, 2, 1]
						.
		array[1]		.
						.
		array[2] < array[7] --> yes --> [10, 9, 8, 4, 5, 6, 7, 3, 2, 1]
						.
		array[2]		.
						.
		array[3] < array[6] --> yes --> [10, 9, 8, 7, 5, 6, 4, 3, 2, 1]
						.
		array[3]		.
						.
		array[4] < array[5] --> yes --> [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
						.
		array[4]		.
						.
		array[5] < array[4] --> stops, because 5 is bigger than 4.
*/
