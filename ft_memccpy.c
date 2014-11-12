/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 03:48:07 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/11 02:56:16 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *str;

	str = (ft_strchr(src, c));
	if (n == 0 || str == 0)
		return (NULL);
	else
		return (ft_memcpy(dst, src, n));
}
