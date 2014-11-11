/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 21:29:35 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/11 05:36:06 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int		i;
	char	*result;

	i = 0;
	if (ft_isprint(c))
	{
		while (s[i] != '\0' && s != s[i])
			i++;
		if (c == s[i])
		{
			return (result = (&s[i] - &s[0]));
		}
		else
			return (result = NULL);
	}
	else
		return (result = NULL);
}
