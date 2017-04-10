/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibahari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 16:36:02 by ibahari           #+#    #+#             */
/*   Updated: 2017/03/23 01:01:41 by ibahari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen_custom(int c, char **v)
{
	int i;
	int j;
	int k;

	i = 1;
	j = 0;
	k = 0;
	while (i < c)
	{
		j = 0;
		while (v[i][j])
		{
			k++;
			j++;
		}
		i++;
	}
	return (k);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	*dest;

	i = 1;
	j = 0;
	k = 0;
	l = ft_strlen_custom(argc, argv) + argc;
	dest = (char*)malloc(sizeof(char *) * (l + 1));
	while (i < argc)
	{
		while (argv[i][j] != '\0')
			dest[k++] = argv[i][j++];
		i++;
		j = 0;
		if (i < argc)
			dest[k++] = '\n';
	}
	dest[k] = '\0';
	return (dest);
}
