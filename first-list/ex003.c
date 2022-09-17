/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex004.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moxu <dairenkonmajime@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:59:17 by moxu              #+#    #+#             */
/*   Updated: 2022/09/17 20:13:25 by moxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Make a program to read a number from the user and determine whether
this number is even or not even. */
#include <stdio.h>

int	main(void)
{
	int	number_user;

	printf("Input an integer number: ");
	scanf("%d", &number_user);
	if (number_user % 2 == 0)
	{
		printf("The number %d is even!\n", number_user);
	}
	else
	{
		printf("The number %d is odd.\n", number_user);
	}
	return (0);
}
