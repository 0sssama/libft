/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:25:36 by olabrahm          #+#    #+#             */
/*   Updated: 2021/11/07 06:36:21 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*casted_s;
	unsigned char	to_find;
	size_t			i;

	i = 0;
	if (n == 0)
		return (0);
	to_find = (unsigned char) c;
	casted_s = (unsigned char *) s;
	while (i < n && i < ft_strlen(s))
	{
		if (casted_s[i] == to_find)
			return ((void *) &casted_s[i]);
		i++;
	}
	if (casted_s[i] == to_find && i < n)
		return ((void *) &casted_s[i]);
	return (0);
}
