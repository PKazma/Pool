/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibahari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 00:41:29 by ibahari           #+#    #+#             */
/*   Updated: 2017/03/25 03:36:38 by ibahari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		words_counter(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		while (*str && (*str == ' ' || *str == '\n' || *str == '\t'))
			str++;
		if (*str && *str != ' ' && *str != '\n' && *str != '\t')
		{
			i++;
			while (*str && *str != ' ' && *str != '\n' && *str != '\t')
				str++;
		}
	}
	return (i);
}

char	*ft_strdup_custom(char *src)
{
	int		i;
	int		j;
	char	*dest;

	j = 0;
	while (src[j] && src[j] != ' ' && src[j] != '\n' && src[j] != '\t')
		j++;
	if (!(dest = (char *)malloc((j + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (++i < j)
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	char	**dest;

	i = words_counter(str);
	if (!(dest = (char **)malloc((i + 1) * sizeof(char*))))
		return (NULL);
	j = -1;
	while (*str)
	{
		while (*str && (*str == ' ' || *str == '\n' || *str == '\t'))
			str++;
		if (*str && *str != ' ' && *str != '\n' && *str != '\t')
			dest[++j] = ft_strdup_custom(str);
		while (*str && *str != ' ' && *str != '\n' && *str != '\t')
			str++;
	}
	dest[i] = NULL;
	return (dest);
}
