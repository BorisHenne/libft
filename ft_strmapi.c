/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 18:42:08 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/23 22:12:24 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	char			*str;
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		new = ft_strnew(ft_strlen(s) + 1);
		if (!new)
			return (NULL);
		str = new;
		while (*s && f && s)
		{
			*new = (*f)(i++, *s);
			new++;
			s++;
		}
		*new = 0;
		return (str);
	}
	return (NULL);
}
