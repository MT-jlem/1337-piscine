/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 18:27:07 by mjlem             #+#    #+#             */
/*   Updated: 2021/08/11 09:26:16 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i ;
	int	j ;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			display(i / 10 + '0');
			display(i % 10 + '0');
			display(' ');
			display(j / 10 + '0');
			display(j % 10 + '0');
			if (i != 98)
			{
				display(',');
				display(' ');
			}
			j++;
		}
		i++;
	}
}
