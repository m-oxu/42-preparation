/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex008.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moxu <dairenkonmajime@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:02:20 by moxu              #+#    #+#             */
/*   Updated: 2022/09/19 14:11:19 by moxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a program that gets the maximum speed and the speed at which a driver
was driving on it. Calculate the fine that the driver will receive,
considering that US$ 5,00 are paid for each km/h that is above the allowed
speed (consider only integer numbers). If the driver's speed is within
the limit, the program should say that there is no fine.
*/
#include <stdio.h>

int	main(void)
{
	int	max_speed_road;
	int	driver_speed;
	int	fine_for_above_km;
	int	driver_fine;

		fine_for_above_km = 5;
	printf("Input the maximum speed of the road: ");
	scanf("%d", &max_speed_road);
	printf("Input the driver speed of that road: ");
	scanf("%d", &driver_speed);
	driver_fine = driver_speed - max_speed_road;
	if (driver_fine < 0)
	{
		printf("You are good to go! Drive safely. \n");
	}
	else
	{
		printf("You were %dkm/h above the limit! Your fine is US$%d,00.\n",
			driver_fine, driver_fine * fine_for_above_km);
	}
	return (0);
}
