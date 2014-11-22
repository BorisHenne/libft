/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 05:06:02 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/22 18:05:27 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memalloc(size_t size)
{
	void *var;

	var = malloc(sizeof(void *) * size);
	if (var == NULL)
		return (NULL);
	ft_bzero(var, size);
	return (var);
}
