/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 15:47:52 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/23 22:09:40 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t lens2;

	if (*s2 == '\0')
		return ((char *)s1);
	lens2 = ft_strlen(s2);
	while (*s1 != '\0' && n-- >= lens2)
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, lens2) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
