/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibahari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 17:48:48 by ibahari           #+#    #+#             */
/*   Updated: 2017/03/16 19:44:22 by ibahari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour < 11 && hour != 0)
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour, (hour + 1) % 12);
	else if (hour == 0)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 12)
		printf("12.00 P.M. AND 1.00 P.M.\n");
	else if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
	else if (hour == 24 || hour == 0)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	if (hour > 12 && hour < 23)
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour % 12, (hour + 1) % 12);
}
