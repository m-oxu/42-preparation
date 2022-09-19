/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex006.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moxu <dairenkonmajime@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 00:55:31 by moxu              #+#    #+#             */
/*   Updated: 2022/09/19 01:20:20 by moxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Make a program that takes two partial grades from a student (0 to 100)
and tells the student if he is passing (average greater than or equal to 70),
taking a final exam (average between 40 and 69) or failing
(average lower than 40). If the student is taking the exam, the program will
ask for the grade's exam (0 to 100) and inform if the student is approved
(average plus exam grade greater than or equal to 100) or failed
(average plus exam grade lower than 100).
*/
#include <stdio.h>

int	main(void)
{
	float	partial_grade_1;
	float	partial_grade_2;
	float	average_part_grade;
	float	final_exam_grade;

	printf("Input the two grades (0 to 100) separated by a blank space : ");
	scanf("%f %f", &partial_grade_1, &partial_grade_2);
	average_part_grade = (partial_grade_1 + partial_grade_2) / 2;
	if (average_part_grade >= 70)
	{
		printf("You passed the exam! :) \n");
	}
	else if (average_part_grade >= 40 && average_part_grade <= 70)
	{
		printf("You are taking a final exam. "
			"Please input your final result grade: ");
		scanf("%f", &final_exam_grade);
		if ((final_exam_grade + average_part_grade) >= 100)
		{
			printf("Congratulations! You passed the exam! \n");
		}
		else
		{
			printf("Sorry, you didn't pass. :( \n");
		}
	}
	else
	{
		printf("Sorry, you failed the exam. :( \n");
	}
	return (0);
}
