/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:28:21 by mjlem             #+#    #+#             */
/*   Updated: 2021/08/25 17:27:49 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_stock_str.h"
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	display(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n ;

	n = nb;
	if (n < 0)
	{
		display('-');
		n = -n;
	}
	if (n < 10)
	{
		display(n + '0');
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		display('\n');
		ft_putnbr(par[i].size);
		display('\n');
		ft_putstr(par[i].copy);
		display('\n');
		i++;
	}
}
