/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 00:55:51 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/24 03:04:15 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_match_previous(char const *s, char c, int i)
{
	if ((s[i] == 0 && s[i] != c) || (s[i] != c && s[i - 1] == c))
		return (1);
	else
		return (0);
}

int		ft_size_str(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

int		ft_size_tab(char const *s, char c)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (s[i])
	{
		if (ft_match_previous(s, c, i))
			size++;
		i++;
	}
	return (size + 1);
}

char	**ft_create_tab(char **tab, char const *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (ft_match_previous(s, c, i))
		{
			tab[j] = malloc(sizeof(*tab) * ft_size_str((s + i), c));
			if (tab[j] != NULL)
				ft_memcpy(tab[j], (s + i), (size_t)ft_size_str((s + i), c));
			j++;
		}
		i++;
	}
	tab[j] = 0;
	return (tab);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		size;

	tab = NULL;
	if (s == NULL || c == 0)
	{
		tab = malloc(sizeof(tab));
		if (tab != NULL)
		{
			*tab = malloc(sizeof(*tab));
			if (*tab != NULL)
				tab[0][0] = '\0';
		}
		return (tab);
	}
	size = ft_size_tab(s, c);
	tab = malloc(sizeof(tab) * size);
	if (tab != NULL)
		tab = ft_create_tab(tab, s, c);
	return (tab);
}
