/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 18:47:29 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/19 19:14:02 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	char	*result;

	dst = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 && s2)
		return (ft_strdup((char *)s2));
	else if (s1 && !s2)
		return (ft_strdup((char *)s1));
	else if (!s1 || !dst)
		return (NULL);
	result = dst;
	while (*s1)
	{
		*dst = *s1;
		dst++;
		s1++;
	}
	while (*s2)
	{
		*dst = *s2;
		dst++;
		s2++;
	}
	*dst = 0;
	return (result);
}
