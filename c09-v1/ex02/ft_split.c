/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 18:24:49 by mjlem             #+#    #+#             */
/*   Updated: 2021/08/26 18:28:24 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	is_sep(char sep, char *charset)
{
	if (sep == '\0')
		return (1);
	while (*charset)
	{
		if (*charset == sep)
			return (1);
		charset++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (!is_sep(str[i], charset) && \
				(is_sep(str[i + 1], charset) || str[i + 1] == '\0' ))
			words++;
		i++;
	}
	return (words);
}

void	ft_copy_word(char *dest, char *from, char *charset)
{
	int	i;

	i = 0;
	while (!is_sep(from[i], charset))
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_move_to_tab(char **tab, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i])
	{
		if (is_sep(str[i], charset))
			i++;
		else
		{
			j = 0;
			while (!is_sep(str[i + j], charset))
				j++;
			tab[word] = (char *)malloc(j + 1);
			ft_copy_word(tab[word], str + i, charset);
			i = i + j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		word;

	word = count_words(str, charset);
	tab = (char **)malloc(sizeof(char *) * (word + 1));
	if (!tab)
		return (NULL);
	tab[word] = 0;
	ft_move_to_tab(tab, str, charset);
	return (tab);
}
