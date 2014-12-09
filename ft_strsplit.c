/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 00:55:51 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/27 03:07:01 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_match_previous(char const *s, char c, int i)
{
	if ((i == 0 && s[i] != c) || (s[i] != c && s[i - 1] == c))
		return (1);
	else
		return (0);
}

int		ft_sizestr(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

int		ft_sizetab(char const *s, char c)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (ft_match_previous(s, c, i))
			len++;
		i++;
	}
	return (len + 1);
}

char	**ft_createtab(char **tab, char const *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (ft_match_previous(s, c, i))
		{
			tab[j] = malloc(sizeof(*tab) * ft_sizestr(s + i, c));
			{
				if (tab[j] != NULL)
					ft_memcpy(tab[j], s + i, (size_t)ft_sizestr(s + i, c));
			}
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
	int		len;

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
	len = ft_sizetab(s, c);
	tab = malloc(sizeof(tab) * len);
	if (tab != NULL)
		tab = ft_createtab(tab, s, c);
	return (tab);
}
