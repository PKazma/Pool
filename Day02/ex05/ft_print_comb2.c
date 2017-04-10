/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibahari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 19:23:58 by ibahari           #+#    #+#             */
/*   Updated: 2017/03/10 14:26:43 by ibahari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putmynbr(int n)
{
	if (n >= 10)
	{
		ft_putmynbr(n / 10);
		ft_putmynbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

void	ft_displaymynbr(int a, int b)
{
	if (a < 10)
		ft_putchar('0');
	ft_putmynbr(a);
	ft_putchar(' ');
	if (b < 10)
		ft_putchar('0');
	ft_putmynbr(b);
	if (a != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_displaymynbr(a, b);
			b++;
		}
		a++;
	}
}
