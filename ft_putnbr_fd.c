/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:00:28 by olabrahm          #+#    #+#             */
/*   Updated: 2021/11/06 14:17:04 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	uns_n;

	uns_n = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		uns_n = -n;
	}
	if (uns_n >= 0 && uns_n <= 9)
		ft_putchar_fd(uns_n + 48, fd);
	else
	{
		ft_putnbr_fd(uns_n / 10, fd);
		ft_putnbr_fd(uns_n % 10, fd);
	}
}
