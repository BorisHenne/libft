/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 21:30:04 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/08 21:30:06 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strrchr(const char *s, int c);
{
	int i;
	char *result;

	i = ft_strlen(s);
	if(ft_isprint(c))
	{
		while (c != s[i])
			i--;
		if (c == s[i])
		{
			return(result = (&s[i] - &s[0]);
		}
		else
			return(result = NULL);
	}
	else
		return (result = NULL);
}
