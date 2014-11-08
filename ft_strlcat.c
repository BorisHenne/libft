/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 21:27:30 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/08 21:27:32 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcat(char * restrict dst, const char * restrict src, size_t size)
{
	size_t dest_len;
	int i;

	dest_len = ft_strlen(dest);
	i = 0;
	while(i < size && src[i] != '\0')
	{
		i++;
	}
return(dest_len + i);
}
