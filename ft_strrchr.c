/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:21:58 by olabrahm          #+#    #+#             */
/*   Updated: 2021/11/04 15:21:22 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_xd;
	int		i;

	s_xd = (char *) s;
	i = ft_strlen(s_xd);
	while (i >= 0)
	{
		if (s_xd[i] == c)
			return (&s_xd[i]);
		i--;
	}
	return (0);
}
