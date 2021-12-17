/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:32:26 by mjlem             #+#    #+#             */
/*   Updated: 2021/08/24 08:00:45 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	*p;
	int	i;
	int	j;

	if (min >= max)
	{
		return (0);
	}
	i = 0;
	j = max - min;
	p = (int *) malloc(j * sizeof(int));
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
/*
int main()
{
	int i;
	int min = -2;
	int max = 19 ;
	int *p;

	p = ft_range(min , max);
	i = 0;
	if (p == NULL)
		return (0);
	while (i < max - min)
	{
		printf("%d \n",p[i]);
		i ++;
	}
}
*/
