/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibahari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 19:18:40 by ibahari           #+#    #+#             */
/*   Updated: 2017/03/19 19:42:32 by ibahari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	else if (*s1 == *s2 && *s1 != '*')
		return (nmatch(s1 + 1, s2 + 1));
	else if (*s1 == '*' && *s2 == '*')
		return (nmatch(s1 + 1, s2));
	else if (*s2 == '*' && !*s1)
		return (nmatch(s1, s2 + 1));
	else if (*s2 == '*' && *s2 && s1)
		return (nmatch(s1, s2 + 1) + nmatch(s1 + 1, s2));
	else
		return (0);
}
