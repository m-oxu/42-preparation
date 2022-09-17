/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex001.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moxu <dairenkonmajime@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:37:41 by moxu              #+#    #+#             */
/*   Updated: 2022/09/17 16:45:49 by moxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Make a program to:
	a. receive from the user a time in seconds;
	b. calculate and show the equivalent time in hours, minutes and seconds
*/

#include <stdio.h>

int	main(void)
{
	float	time_in_seconds;
	float	time_in_minutes;
	float	time_in_hour;
	int		divisible;

		divisible = 60;
	printf("Input one value of time in seconds: ");
	scanf("%f", &time_in_seconds);
	time_in_minutes = time_in_seconds / divisible;
	time_in_hour = time_in_seconds / (divisible * divisible);
	printf("Time in seconds: %f | Time in minutes: %f | Time in hours: %f \n",
		time_in_seconds, time_in_minutes, time_in_hour);
	return (0);
}
