/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 21:25:20 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/09 01:15:56 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl(char const *s)
{
	char	*buffer;

	buffer = (char *)s;
	buffer[ft_strlen(buffer)] += '\n';
	ft_putstr(buffer);
}
