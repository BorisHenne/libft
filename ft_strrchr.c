/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 21:29:35 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/23 22:13:59 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *buffer;
	char match;

	match = c;
	buffer = (char *)s + ft_strlen(s);
	while (*buffer != match)
	{
		if (buffer == s)
			return (NULL);
		buffer--;
	}
	return (buffer);
}
