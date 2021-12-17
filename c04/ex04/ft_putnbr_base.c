/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:05:19 by mjlem             #+#    #+#             */
/*   Updated: 2021/08/17 18:01:24 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	display(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb, char *base)
{
	long	n;
	int		i;

	n = nb;
	i = ft_strlen(base);
	if (n < 0)
	{
		display('-');
		n = -n;
	}
	if (n < i)
	{
		display(base[n % i]);
	}
	else
	{
		ft_putnbr(n / i, base);
		ft_putnbr(n % i, base);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return ;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return ;
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return ;
			j++;
		}
		i++;
	}
	ft_putnbr(nbr, base);
}
