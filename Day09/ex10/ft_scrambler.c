/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibahari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 15:57:35 by ibahari           #+#    #+#             */
/*   Updated: 2017/03/17 16:00:36 by ibahari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int i;
	int j;
	int k;
	int l;

	i = ***a;
	j = *b;
	k = *******c;
	l = ****d;
	***a = j;
	*b = l;
	*******c = ***a;
	****d = *******c;
}
