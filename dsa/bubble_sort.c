/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moxu <dairenkonmajime@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:40:36 by moxu              #+#    #+#             */
/*   Updated: 2022/09/21 13:09:49 by moxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	bubble_sort_algorithm(int number_array[], int n_size);

int	main(void)
{
	int	number_array[10];
	int	i;
	int	aux_var;

		i = 0;
	while (i < 10)
	{
		printf("Adicione the %dth number: ", i);
		scanf("%d", &number_array[i]);
		i++;
	}
	bubble_sort_algorithm(number_array, 10);
	i = 0;
	while (i < 10)
	{
		printf("%d ", number_array[i]);
		i++;
	}
	printf("\n");
	return (0);
}

/*
This swap function was idealized by the GeekForGeeks page:
	https://www.geeksforgeeks.org/bubble-sort/
*/
void	change_places(int *f_place, int *s_place)
{
	int	aux_var;

		aux_var = *f_place;
		*f_place = *s_place;
		*s_place = aux_var;
}

void	bubble_sort_algorithm(int number_array[], int n_size)
{
	int	i;
	int	f;
	int	z;
	int	aux_var;

		f = n_size;
	while (f > 0)
	{
		i = 0;
		while (i < n_size)
		{
			z = i + 1;
			while (z < n_size)
			{
				if (number_array[i] > number_array[z])
				{
					change_places(&number_array[i], &number_array[z]);
				}
				z++;
			}
			i++;
		}
		f--;
	}
}
/*
This is an implementation of the bubble sort algorithm in an array.
The process is simple, but, the complexity increase with the size
of the array:

				arr[5] = {5, 3, 2, 9, 0};

				{5, 3, 2,  9,  0}
				 |__| --> {3, 5, 2,  9,  0} [3 is less than 5]
							  |__|--> {3, 2, 5,  9,  0} [2 is less than 5]
											 |___| --> {3, 2, 5,  9,  0}
																   |__|
											{3, 2, 5,  0,  9}	<--

This process was only the first interaction. When we analyze the code,
we can see this process:

	if (number_array[i] > number_array[z]) [if the first n is greater then the sec]
	{
		aux_var = number_array[i]; [hold the first n to exchange]
		number_array[i] = number_array[z]; [put the sec n in the first n]
		number_array[z] = aux_var; [put the first n in the second n place]
	}

This code might not be the best, because in order to finish, he needs
to pass through each index. Notice that, each interaction of bubble sort,
the last index is always the bigger number, so we don't need to go there
anymore. it's like:

	last_index {
		first_index {
			first_index + 1
		}
	}
	|
	|___> 	last_index {
				first_index + 1 {
					first_index + 2
				}
			}
			|
			|___> ... ---> 	last_index {
								first_index + n {
									first_index + z
								}
							}
							|
						<____|
		last_index - 1 {
					first_index + 1 {
						first_index + 2
					}
				}
				and so on....

No matter how much messy the array is, he always will stay untill the end.
I implemented using while loop because the normes of 42 school, but with for
loops, the code looks better and more readable.

void	bubble_sort_algorithm(int number_array[], int n_size)
	int	aux_var;

	for (int f = n_size; f > 0; f--)
	{
		for (int i = 0; i < n_size; i++)
		{
			for (int z = i + 1; z < n_size; z++)
			{
				if (number_array[i] > number_array[z])
				{
					aux_var = number_array[i];
					number_array[i] = number_array[z];
					number_array[z] = aux_var;
				}
			}
		}
	}

This is what it needs to implement the algorithm.
*/
