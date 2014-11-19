/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 03:48:07 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/13 16:36:20 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*src_cast;
	char	*dst_cast;
	size_t	i;

	i = 0;
	src_cast = (char *)src;
	dst_cast = (char *)dst;
	if (n == 0 || dst == src)
		return (dst);
	while (i < n)
	{
		dst_cast[i] = src_cast[i];
		if (dst_cast[i] == c)
			return (dst_cast + i + 1);
		i++;
	}
	return (NULL);
}
