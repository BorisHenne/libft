/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 21:27:18 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/23 22:08:11 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
	char	*pos1;
	char	*pos2;

	pos1 = (char *)src;
	pos2 = dest;
	while (*pos2 != '\0')
		pos2++;
	while (*pos1 != '\0')
	{
		*pos2 = *pos1;
		pos1++;
		pos2++;
	}
	*pos2 = '\0';
	return (dest);
}
