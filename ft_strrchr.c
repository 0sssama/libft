/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:21:58 by olabrahm          #+#    #+#             */
/*   Updated: 2021/11/05 12:02:06 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*casted_s;
	char	to_find;
	int		i;

	casted_s = (char *) s;
	to_find = (char) c;
	i = ft_strlen(casted_s);
	while (i >= 0)
	{
		if (casted_s[i] == to_find)
			return (&casted_s[i]);
		i--;
	}
	return (0);
}
