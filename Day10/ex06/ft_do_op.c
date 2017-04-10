/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do-op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibahari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 03:12:36 by ibahari           #+#    #+#             */
/*   Updated: 2017/03/29 19:04:51 by ibahari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		main(int argc, char **argv)
{
	argc = 0;
	if (argv[4])
		return (0);
	if (ft_strcmp(argv[2], "+") == 0)
		ft_putnbr(ft_plus(ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (ft_strcmp(argv[2], "-") == 0)
		ft_putnbr(ft_moins(ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (ft_strcmp(argv[2], "*") == 0)
		ft_putnbr(ft_fois(ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (ft_strcmp(argv[2], "/") == 0)
	{
		if (!(ft_errors('/', ft_atoi(argv[3]))))
			ft_putnbr(ft_div(ft_atoi(argv[1]), ft_atoi(argv[3])));
	}
	else if (ft_strcmp(argv[2], "%") == 0)
	{
		if (!(ft_errors('%', ft_atoi(argv[3]))))
			ft_putnbr(ft_modulo(ft_atoi(argv[1]), ft_atoi(argv[3])));
	}
	else
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
