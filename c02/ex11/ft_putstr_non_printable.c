/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:29:36 by mjlem             #+#    #+#             */
/*   Updated: 2021/08/24 14:51:23 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	print(char c)
{
	write(1, &c, 1);
}

void	hexa(unsigned char d)
{
	char	*h;

	h = "0123456789abcdef";
	print(h[d / 16]);
	print(h[d % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			print('\\');
			hexa((unsigned char)str[i]);
		}
		else
		{
			print(str[i]);
		}
		i++;
	}
}
/*
#include  <stdio.h>
int main()
{
	char str[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
}
*/
