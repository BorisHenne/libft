/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 06:28:08 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/11 03:08:32 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	while (n != 0)
	{
		str1 = * (unsigned char *)s1;
		str2 = * (unsigned char *)s2;
		n--;
		s1++;
		s2++;
		if ( str1 != str2)
			return (str1 - str2);
	}
	return (0);
}
