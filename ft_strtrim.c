/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 20:06:31 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/23 22:10:39 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbblank(char *s)
{
	size_t	blank;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	while (ft_isblank(s[i]))
		i++;
	blank = i;
	if (s[i] != '\0')
	{
		i = len - 1;
		while (ft_isblank(s[i]))
		{
			i--;
			blank++;
		}
	}
	return (len - blank);
}

char	*ft_strtrim(const char *s)
{
	size_t	nbblank;
	char	*buffer;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	nbblank = ft_nbblank((char *)s);
	buffer = (char *)malloc(sizeof(*buffer) * (nbblank + 1));
	if (!buffer)
		return (NULL);
	while (ft_isblank(s[i]))
		i++;
	while (j < nbblank)
	{
		buffer[j] = s[i];
		j++;
		i++;
	}
	buffer[j] = '\0';
	return (buffer);
}
