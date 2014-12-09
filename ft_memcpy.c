/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 03:40:23 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/27 02:20:27 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst_cast;
	const char	*src_cast;

	dst_cast = dst;
	src_cast = src;
	while (n--)
		*dst_cast++ = *src_cast++;
	return (dst);
}
