/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex001.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moxu <dairenkonmajime@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:57:26 by moxu              #+#    #+#             */
/*   Updated: 2022/09/20 22:02:08 by moxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
If we list all the natural numbers below 10 that are multiples of 3 or 5,
we get 3, 5, 6 and 9. The sum of these multiples is 23. Finish the solution so
that it returns the sum of all the multiples of 3 or 5 below the number passed
in. Additionally, if the number is negative, return 0.

Note: If the number is a multiple of both 3 and 5, only count it once.
*/
#include <stdio.h>

int	main(void)
{
	int	multiplier_sum;
	int	number;
	int	i;

		multiplier_sum = 0;
	printf("Input a number: ");
	scanf("%d", &number);
	i = 0;
	while (i < number)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			multiplier_sum += i;
		}
		else if (i % 3 == 0 || i % 5 == 0)
		{
			multiplier_sum += i;
		}
		i++;
	}
	printf("%d \n", multiplier_sum);
	return (0);
}
