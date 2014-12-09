/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 05:06:02 by bhenne            #+#    #+#             */
/*   Updated: 2014/12/09 03:25:49 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memalloc(size_t size)
{
	char *var;

	if (size < 1)
		return (NULL);
	var = malloc(sizeof(char) * size);
	if (!var)
		return (NULL);
	ft_bzero(var, size);
	return ((void *)var);
}
