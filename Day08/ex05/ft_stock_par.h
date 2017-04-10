/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibahari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 01:02:49 by ibahari           #+#    #+#             */
/*   Updated: 2017/03/25 03:49:25 by ibahari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

void					ft_putchar(char c);
struct s_stock_par		*ft_param_to_tab(int ac, char **av);
char					**ft_split_whitespaces(char *str);
void					ft_show_tab(struct s_stock_par *par);
typedef struct			s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}						t_stock_par;

#endif
