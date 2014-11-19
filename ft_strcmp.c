/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 06:28:08 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/19 22:30:58 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
	size_t	len;
	size_t	len2;

	len = ft_strlen(s1) + 1;
	len2 = ft_strlen(s2) + 1;
	len = ((len <= len2) ? len : len2);
	return (ft_memcmp(s1, s2, len));
}
