/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 06:28:08 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/11 03:08:32 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char* s)
{
	size_t len;
	size_t i;
	char *buffer;

	len = ft_strlen(s);
	buffer = ft_memalloc(i+1);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		buffer[i] = s[i];
		i++;
	}
	return (buffer);
}
