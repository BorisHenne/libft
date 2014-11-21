/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 21:29:35 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/21 12:56:45 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	char *buffer;
	char match;

	match = c;
	buffer = (char *)s;
	while (*buffer)
	{
		if (*buffer == match)
			return (buffer);
		buffer++;
	}
	if (*buffer == match)
		return (buffer);
	return (NULL);
}
