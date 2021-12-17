/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 11:07:57 by mjlem             #+#    #+#             */
/*   Updated: 2021/08/22 16:53:47 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
char	*ft_strdup(char *src)
{
	int		i;
	int		n;
	char	*p;

	n = 0;
	i = 0;
	while (src[n])
	{
		n++;
	}
	p = (char *) malloc ((n + 1) * sizeof (char));
	if (!p)
		return (p = NULL);
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
