/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 18:49:53 by mjlem             #+#    #+#             */
/*   Updated: 2021/08/08 19:34:01 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_display(int y, int x, int i, int j)
{
	if ((i == 1 && j == 1) || (j == y && i == 1))
		ft_putchar('A');
	if ((i == x && x != 1 && j == 1) || (i == x && j == y && x != 1))
		ft_putchar('C');
	if ((j > 1 && j < y && i == 1) || (i > 1 && i < x && j == 1))
		ft_putchar('B');
	if (i > 1 && i < x && j > 1 && j < y)
		ft_putchar(' ');
	if (i == x && j > 1 && j < y && x != 1)
		ft_putchar('B');
	if (i > 1 && j == y && i < x && y != 1)
		ft_putchar('B');
	if (i == x)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			ft_display(y, x, i, j);
			i++;
		}
		j++;
	}
}
