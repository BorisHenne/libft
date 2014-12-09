/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/01 19:28:29 by bhenne            #+#    #+#             */
/*   Updated: 2014/12/03 15:40:33 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *l_ptr;

	if (alst == NULL)
		return ;
	l_ptr = *alst;
	del(l_ptr->content, l_ptr->content_size);
	free(l_ptr);
	*alst = NULL;
}
