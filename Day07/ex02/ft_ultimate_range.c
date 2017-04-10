/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibahari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 06:35:25 by ibahari           #+#    #+#             */
/*   Updated: 2017/03/20 06:50:52 by ibahari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *str;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	str = (int*)malloc(sizeof(*str) * (max - min));
	i = 0;
	while (min < max)
	{
		str[i] = min;
		i++;
		min++;
	}
	*range = str;
	return (i);
}
