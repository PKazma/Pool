/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibahari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/26 03:55:28 by ibahari           #+#    #+#             */
/*   Updated: 2017/03/30 01:08:15 by ibahari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int n;

	n = 0;
	if (!(tab) || length <= 2)
		return (1);
	while (tab[n] == tab[n + 1] && n + 1 < length)
		n++;
	if (tab[n] < tab[n + 1])
		while (n < (length - 1))
		{
			if (f(tab[n], tab[n + 1]) > 0)
				return (0);
			n++;
		}
	if (tab[n] > tab[n + 1])
		while (n < (length - 1))
		{
			if (f(tab[n], tab[n + 1]) < 0)
				return (0);
			n++;
		}
	return (1);
}
