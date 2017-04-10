/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibahari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 00:25:44 by ibahari           #+#    #+#             */
/*   Updated: 2017/03/29 01:24:37 by ibahari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_atoi(char *str);
int		ft_div(int a, int b);
int		ft_errors(int sign, int i);
int		ft_fois(int a, int b);
int		ft_modulo(int a, int b);
int		ft_moins(int a, int b);
int		ft_plus(int a, int b);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_strcmp(char *s1, char *s2);

#endif
