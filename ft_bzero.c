/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 00:04:04 by olabrahm          #+#    #+#             */
/*   Updated: 2021/11/02 00:04:04 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((char *) s)[i])
	{
		((char *) s)[i] = '\0';
		i++;
	}
}

/*
#include <string.h>
#include <strings.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	char	*str;
	char	*str1;
	int		n;

	(void) ac;
	str = strdup(av[1]);
	str1 = strdup(av[1]);
	n = atoi(av[2]);
	bzero(str, n);
	ft_bzero(str1, n);
	printf("before > %s	|	after : %s	(expected	>%s<)\n", av[1], str1+n, str+n);
	free(str);
	free(str1);
}*/
