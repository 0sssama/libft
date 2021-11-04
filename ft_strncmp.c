/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:13:38 by olabrahm          #+#    #+#             */
/*   Updated: 2021/11/04 17:25:05 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1_xd;
	unsigned char	*s2_xd;
	size_t			i;

	i = 0;
	s1_xd = (unsigned char *) s1;
	s2_xd = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (s1_xd[i] && s2_xd[i] && s1_xd[i] == s2_xd[i] && i < n - 1)
		i++;
	return (s1_xd[i] - s2_xd[i]);
}
