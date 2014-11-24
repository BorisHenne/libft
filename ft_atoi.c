/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 21:30:13 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/24 03:02:54 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_min_max(const char *s, int result, int sign)
{
	if (result >= 214748364 && ((sign == 1 && *s > '0' + 7) ||
		(sign == -1 && *s > '0' + 8)))
		return (-1);
	return (0);
}

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
		if (ft_min_max(str, result, sign) == -1)
			return (-1);
		result *= 10;
		result += *buffer - 48;
		buffer++;
	}
	return (sign * result);
}
