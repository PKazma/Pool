/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibahari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 07:40:52 by ibahari           #+#    #+#             */
/*   Updated: 2017/03/29 19:08:18 by ibahari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_custom(char **a, char **b)
{
	char *aa;
	char *bb;

	aa = *a;
	bb = *b;
	*b = aa;
	*a = bb;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;

	i = 0;
	while (tab[i + 1] != 0)
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			ft_swap_custom(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}
