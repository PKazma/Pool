/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibahari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 15:25:30 by ibahari           #+#    #+#             */
/*   Updated: 2017/03/17 16:14:00 by ibahari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_button(int i, int j, int k)
{
	if ((i > j && i < k) || (i < j && i > k))
		return (i);
	else if ((k > j && k < i) || (k < j && k > i))
		return (k);
	return (j);
}
