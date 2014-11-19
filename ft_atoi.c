/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 21:30:13 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/09 00:42:56 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	char	*buffer;
	char	sign;
	int		result;

	buffer = str;
	while (ft_isspace(*buffer))
		buffer++;
	if (*buffer == '-' || *buffer = '+')
	{
		sign = (*buffer == '-' ? -1 : 1);
		buffer++;
	}
	while (ft_isdigit(*buffer))
	{
		result = result * 10 + sign * (*buffer - 48);
		buffer++;
	}
	return (result);
}
