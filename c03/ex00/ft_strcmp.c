/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 09:34:01 by mjlem             #+#    #+#             */
/*   Updated: 2021/08/13 12:25:00 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	s3;
	unsigned char	s4;
	int				i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		s3 = s1[i];
		s4 = s2[i];
		if (s3 != s4)
			return (s3 - s4);
		i++;
	}
	return (0);
}
