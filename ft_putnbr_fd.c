/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rben-mou <rben-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:40:01 by rben-mou          #+#    #+#             */
/*   Updated: 2022/10/10 15:06:33 by rben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(int nb, int fd)
{
	char	n;

	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write(fd, "-", 1);
			nb *= -1;
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10, fd);
			ft_putnbr(nb % 10, fd);
		}
		else
		{
			n = nb + '0';
			write(fd, &n, 1);
		}
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	ft_putnbr(n, fd);
}
