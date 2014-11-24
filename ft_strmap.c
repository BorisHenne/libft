/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 18:42:08 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/23 22:08:31 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
	char *new;
	char *str;

	if (s && f)
	{
		new = ft_strnew(ft_strlen(s) + 1);
		if (!new)
			return (NULL);
		str = new;
		while (*s && f && s)
		{
			*new = (*f)(*s);
			new++;
			s++;
		}
		*new = 0;
		return (str);
	}
	return (NULL);
}
