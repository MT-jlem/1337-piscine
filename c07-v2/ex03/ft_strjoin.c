/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 09:31:36 by mjlem             #+#    #+#             */
/*   Updated: 2021/08/24 09:00:22 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
int	ft_strlen_total(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	l;

	i = 0;
	l = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
		}
		l += j;
		i++;
	}
	i = 0;
	while (sep[i])
	{
		i++;
	}
	l = l + (i * (size - 1));
	return (l);
}

char	*ft_strcat(int size, char **strs, char *sep, char *p)
{
	int	i;
	int	j;
	int	k;

	j = -1;
	k = 0;
	while (strs[++j])
	{
		i = 0;
		while (strs[j][i] != '\0')
		{
			p[k++] = strs[j][i];
			i++;
		}
		i = 0;
		if ((size--) - 1 != 0)
		{
			while (sep[i])
			{
				p[k++] = sep[i++];
			}
		}
	}
	p[k] = '\0';
	return (p);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		s;
	char	*p;

	s = ft_strlen_total(size, strs, sep);
	p = (char *) malloc ((s + 1) * sizeof(int));
	if (size == 0)
	{
		p[0] = '\0';
		return (p);
	}
	return (ft_strcat(size, strs, sep, p));
}
/*
int main(int ac, char **av)
{
	char sep[] = " , ";

	printf("%s", ft_strjoin(ac, av, sep));
return (0);
}
*/
