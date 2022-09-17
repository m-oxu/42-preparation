/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex002.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moxu <dairenkonmajime@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:48:09 by moxu              #+#    #+#             */
/*   Updated: 2022/09/17 19:39:00 by moxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Make a program to take 3 integer values from the user and display their average
(which may not be integer).
*/
#include <stdio.h>

int	main(void)
{
	int		first_value;
	int		second_value;
	int		third_value;
	float	average_value;

	printf("Input three values separated by a space: ");
	scanf("%d %d %d", &first_value, &second_value, &third_value);
	average_value = (first_value + second_value + third_value) / 3;
	printf("The average value of %d, %d and %d is %f.\n",
		first_value, second_value, third_value, average_value);
	return (0);
}
