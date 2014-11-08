/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 21:27:18 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/08 21:27:19 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
	size_t dest_len = ft_strlen(dest);
	int i;

	i = 0;
	while(src[i] != '\0')
		{
		dest[dest_len + i] = src[i];
		i++;
		}
	dest[dest_len + i] = '\0';
return(dest);
}
