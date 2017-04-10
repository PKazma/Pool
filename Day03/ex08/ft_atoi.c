/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibahari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 19:16:37 by ibahari           #+#    #+#             */
/*   Updated: 2017/03/12 21:48:41 by ibahari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int j;

	i = 0;
	while (*str == ' ' || *str == '\t' || *str == '\v' || *str == '\n')
		str++;
	if (*str == '-')
		j = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		i = (i * 10) + (*str - 48);
		str++;
	}
	if (j == 1)
		return (-i);
	else
		return (i);
}