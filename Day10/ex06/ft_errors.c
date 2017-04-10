/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibahari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 00:13:02 by ibahari           #+#    #+#             */
/*   Updated: 2017/03/29 01:25:22 by ibahari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		ft_errors(int sign, int i)
{
	if (i == 0)
	{
		if (sign == '/')
		{
			ft_putstr("Stop : division by zero");
			return (1);
		}
		if (sign == '%')
		{
			ft_putstr("Stop : modulo by zero");
			return (1);
		}
	}
	return (0);
}
