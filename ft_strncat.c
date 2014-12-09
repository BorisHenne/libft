/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 21:27:18 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/13 15:38:25 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
	char *buffer;

	buffer = dest;
	while (*buffer != '\0')
		buffer++;
	while (*src != '\0' && n > 0)
	{
		*buffer = *src;
		buffer++;
		src++;
		n--;
	}
	*buffer = '\0';
	return (dest);
}
