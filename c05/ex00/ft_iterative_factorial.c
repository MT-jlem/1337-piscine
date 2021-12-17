/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:09:58 by mjlem             #+#    #+#             */
/*   Updated: 2021/08/18 15:48:26 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	i = 1;
	n = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		n = n * i;
		i++;
	}
	return (n);
}
