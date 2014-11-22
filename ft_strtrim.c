/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 20:06:31 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/21 20:25:39 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s)
{
	char *new;
	char *str;

	new = ft_strnew(ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	str = new;
	while (ft_isblank(*s))
	{
		new++;
		if (!ft_isblank(*s))
			*new++ = *s++;
	}
	*new = 0;
	return (str);
}
