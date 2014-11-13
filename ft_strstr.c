/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 21:26:08 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/13 15:36:49 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *string2, const char *string1)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (string1 == '\0')
		return ((char *)string2);
	while (string2[i] != '\0')
	{
		if (string2[i] == string1[j])
			j++;
		else
			j = 0;
		if (string1[j] == '\0')
			return ((char *)&string2[i - j + 1]);
		i++;
	}
	return (NULL);
}
