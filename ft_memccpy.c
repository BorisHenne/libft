/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 03:48:07 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/24 22:22:25 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const char	*src_cast;
	char		*dst_cast;

	src_cast = src;
	dst_cast = dst;
	while (n--)
	{
		if (*src_cast == c)
		{
			*dst_cast++ = *src_cast++;
			return (dst_cast);
		}
		*dst_cast++ = *src_cast++;
	}
	return (NULL);
}
