/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:25:36 by olabrahm          #+#    #+#             */
/*   Updated: 2021/11/04 17:36:32 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_xd;
	size_t			i;

	i = 0;
	s_xd = (unsigned char *) s;
	while (i < n)
	{
		if (s_xd[i] == c)
			return ((void *) &s_xd[i]);
		i++;
	}
	return (0);
}
