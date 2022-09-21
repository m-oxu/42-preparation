/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moxu <dairenkonmajime@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:38:06 by moxu              #+#    #+#             */
/*   Updated: 2022/09/21 20:22:01 by moxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Given an array of integers, find the one that appears an odd number of times.

There will always be only one integer that appears an odd number of times.

Examples
[7] should return 7, because it occurs 1 time (which is odd).
[0] should return 0, because it occurs 1 time (which is odd).
[1,1,2] should return 2, because it occurs 1 time (which is odd).
[0,1,0,1,0] should return 0, because it occurs 3 times (which is odd).
[1,2,2,3,3,3,4,3,3,3,2,2,1] should return 4, because it appears 1 time.
*/
#include <stdio.h>

int	find_odd(int length, int array[]);

int	main(void)
{
	int	odd_number;
	int	length;
	int	array[5];
	int	i;

		odd_number = 0;
		length = 5;
		i = 0;
	while (i < length)
	{
		printf("Insert the %dth number: ", i);
		scanf("%d", &array[i]);
		i++;
	}
	odd_number = find_odd(length, array);
	printf("The number that appears an odd number of times is: %d. \n",
		odd_number);
	return (0);
}

int	find_odd(int length, int array[])
{
	int	odd_number;
	int	count_n_times;
	int	i;
	int	z;

		i = 0;
		odd_number = 0;
		count_n_times = 0;
	while (i < length)
	{
		z = 0;
		while (z < length)
		{
			if (array[i] == array[z])
			{
				count_n_times++;
			}
			z++;
		}
		if (count_n_times % 2 != 0)
		{
			odd_number = array[i];
			break ;
		}
		i++;
	}
	return (odd_number);
}
