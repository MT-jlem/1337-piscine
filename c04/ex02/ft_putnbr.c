/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:32:23 by mjlem             #+#    #+#             */
/*   Updated: 2021/08/16 16:32:46 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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
