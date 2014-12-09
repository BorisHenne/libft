/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 23:17:22 by bhenne            #+#    #+#             */
/*   Updated: 2014/11/24 20:25:50 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nb_digit(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n / 10 != 0)
	{
		i++;
		n /= 10;
	}
	i++;
	return (i);
}

char	*ft_create_string(int len, int n)
{
	char *str;

	str = ft_strnew(len + 1);
	if (str != NULL)
	{
		len--;
		if (n < 0)
		{
			str[0] = '-';
			n = n * -1;
		}
		while (n / 10 > 0)
		{
			str[len] = (n % 10) + 48;
			len--;
			n /= 10;
		}
		str[len] = (n % 10) + 48;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_nb_digit(n);
	if (n != -2147483648)
		str = ft_create_string(len, n);
	else
	{
		str = ft_strnew(12);
		if (str != NULL)
			ft_strcpy(str, "-2147483648");
	}
	return (str);
}
