
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 21:30:13 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/21 18:17:52 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
int ft_min_max(const char *s, int ret, int pos)
{
	if (ret >= 214748364 && ((pos == 1 && *s > '0' + 7) ||
		(pos == -1 && *s > '0' + 8)))
		return (-1);
	return (0);
}
*/
int ft_atoi(const char *str)
{
	char	*buffer;
	int		sign;
	int		result;
	result = 0;
	sign = 1;
	buffer =  (char *)str;
	while (ft_isspace(*buffer))
		buffer++;
	if (*buffer == '-' || *buffer  == '+')
	{
		sign = (*buffer == '-' ? -1 : 1);
		buffer++;
	}
	buffer = (*buffer == '+' || *buffer == '-') ? buffer + 1 : buffer;
	while (ft_isdigit(*buffer))
	{
//		if (ft_min_max(str, result, sign) == -1)
//			return (-1);
		result = result * 10 + *buffer - 48;
		buffer++;
	}
	return (sign * result);
}

int	main(void)
{
	char hello[] = "ehrwirhewihrewi2147efefe483648";

	printf("%d", ft_atoi(hello));
	return (0);
}

