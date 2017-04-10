/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibahari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 07:40:52 by ibahari           #+#    #+#             */
/*   Updated: 2017/03/29 19:07:56 by ibahari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap_custom(char **a, char **b)
{
	char *ab;

	ab = *a;
	*a = *b;
	*b = ab;
}

void	ft_sort_wordtab(char **tab)
{
	int i;

	i = 0;
	while (tab[i + 1] != 0)
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			ft_swap_custom(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}
