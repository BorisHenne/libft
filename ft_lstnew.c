/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/01 19:29:44 by bhenne            #+#    #+#             */
/*   Updated: 2014/12/03 16:24:30 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*alst;

	alst = (t_list*)ft_memalloc(sizeof(*alst));
	if (!alst)
		return (NULL);
	if (!content)
	{
		alst->content = NULL;
		alst->content_size = 0;
	}
	else
	{
		alst->content = ft_memalloc(content_size);
		ft_memcpy(alst->content, content, content_size);
		alst->content_size = content_size;
	}
	alst->next = NULL;
	return (alst);
}
