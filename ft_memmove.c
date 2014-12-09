/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 04:51:31 by bhenne            #+#    #+#             */
/*   Updated: 2014/12/09 03:26:12 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char		tmp[len];
	size_t		i;
	char		*dst_char;
	const char	*src_char;

	i = 0;
	dst_char = dst;
	src_char = src;
	if (!src)
		return (dst);
	while (i < len)
	{
		tmp[i] = src_char[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dst_char[i] = tmp[i];
		i++;
	}
	return (dst_char);
}
