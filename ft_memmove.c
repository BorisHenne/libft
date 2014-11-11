/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 04:51:31 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/11 03:09:30 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *buffer;
	
	buffer = ft_memalloc(len);
	if (buffer == NULL)
		return (NULL);
	ft_memcpy(buffer, src, len);
	ft_memcpy(dst, buffer, len);
	free(buffer);
	return (dst);
}
