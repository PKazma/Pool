/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibahari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 15:36:42 by ibahari           #+#    #+#             */
/*   Updated: 2017/03/17 15:42:01 by ibahari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	else
	{
		if (base % 2 != 0)
			base = ft_collatz_conjecture(3 * base + 1) + 1;
		else
			base = ft_collatz_conjecture(base / 2) + 1;
	}
	return (base);
}
