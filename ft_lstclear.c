/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:41:31 by olabrahm          #+#    #+#             */
/*   Updated: 2021/11/06 21:53:05 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_bonus.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current_node;


	current_node = ft_lstlast(*lst);
	while (current_node)
	{
		(*del)((void *)current_node);
		current_node = ft_lstlast(*lst);
	}
}
