/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:34:38 by olabrahm          #+#    #+#             */
/*   Updated: 2021/11/08 13:36:25 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*current_node;

	if (!lst)
		return (0);
	i = 0;
	current_node = lst;
	while (current_node)
	{
		i++;
		current_node = current_node->next;
	}
	return (i);
}
