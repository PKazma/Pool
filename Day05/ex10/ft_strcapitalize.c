/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibahari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 13:59:54 by ibahari           #+#    #+#             */
/*   Updated: 2017/03/18 04:25:08 by ibahari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	str = ft_strlowcase(str);
	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z' && str[0])
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z') &&
				!(str[i] >= 'a' && str[i] <= 'z') &&
				!(str[i] >= '0' && str[i] <= '9') &&
				str[i + 1] >= 'a' && str[i + 1] <= 'z')
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}
