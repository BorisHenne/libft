/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 05:41:05 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/24 22:05:40 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	if (n && s)
	{
		str = (unsigned char *)s;
		i = 0;
		while (i < n)
		{
			if (*str == (unsigned char)c)
				return ((void *)str);
			str++;
			i++;
		}
	}
	return (NULL);
}
