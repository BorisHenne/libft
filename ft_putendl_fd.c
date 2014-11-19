/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 21:25:20 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/09 01:15:56 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char const *s, int fd)
{
	char *buffer;

	buffer = (char*)s;
	buffer[ft_strlen(buffer)] += '\n';
	ft_putstr_fd(buffer,fd);
}
