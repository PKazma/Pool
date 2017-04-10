/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibahari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 00:41:22 by ibahari           #+#    #+#             */
/*   Updated: 2017/03/25 03:52:14 by ibahari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int							ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char						*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*dest;

	if (!src)
		return (0);
	i = ft_strlen(src);
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (0);
	j = 0;
	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

struct		s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int				i;
	int				j;
	t_stock_par		*param;

	param = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	if (!param)
		return (0);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		param[i].size_param = j;
		param[i].str = av[i];
		param[i].copy = ft_strdup(av[i]);
		param[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	param[i].str = 0;
	return (param);
}
