/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 03:40:23 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/10 06:10:14 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dst_cast;
	const char	*src_cast;

	i = 0;
	dst_cast = dst;
	src_cast = src;
	while (i < n)
	{
		dst_cast[i] = src_cast[i];
		i++;
	}
	return (dst_cast);
}
