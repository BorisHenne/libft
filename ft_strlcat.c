/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 21:27:30 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/24 03:03:37 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (src_len + size);
	if (src_len < size - dst_len)
	{
		ft_memcpy((dst + dst_len), src, src_len);
		dst += dst_len + src_len;
	}
	else
	{
		ft_memcpy((dst + dst_len), src, size - dst_len - 1);
		dst += size - 1;
	}
	*dst = '\0';
	return (dst_len + src_len);
}
