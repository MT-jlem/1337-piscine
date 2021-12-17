/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 14:49:38 by mjlem             #+#    #+#             */
/*   Updated: 2021/08/22 07:45:48 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	if (min >= max)
		return (0);
	i = 0;
	j = max - min;
	*range = (int *) malloc(j * sizeof(int));
	if (!*range)
		return (-1);
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (j);
}
/*
int main()
{
	int *range;
	int	n;

	n = ft_ultimate_range(&range, 10, 20);
	printf("%d\n\n", n);
	int i = 0;
	while (i < 10)
	{
		printf("%d \n", range[i]);
		i ++;
	}
}
*/
