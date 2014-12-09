/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 21:30:13 by bhenne            #+#    #+#             */
/*   Updated: 2014/12/08 21:24:51 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	char	*buffer;
	int		sign;
	int		result;

	result = 0;
	buffer = (char *)str;
	while (ft_isspace(*buffer))
		buffer++;
	sign = (*buffer == '-' ? -1 : 1);
	if (*buffer == '-' || *buffer == '+')
		buffer++;
	while (ft_isdigit(*buffer))
	{
		result *= 10;
		result += *buffer - 48;
		buffer++;
	}
	return (sign * result);
}
