/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/01 19:26:48 by bhenne            #+#    #+#             */
/*   Updated: 2014/12/09 03:05:04 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*l_ptr;

	if (alst == NULL)
		return ;
	l_ptr = *alst;
	while (l_ptr->next)
	{
		del(l_ptr->content, l_ptr->content_size);
		l_ptr = l_ptr->next;
	}
	del(l_ptr->content, l_ptr->content_size);
	free(l_ptr);
	*alst = NULL;
}
