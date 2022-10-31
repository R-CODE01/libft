/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rben-mou <rben-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:20:09 by rben-mou          #+#    #+#             */
/*   Updated: 2022/10/29 16:12:29 by rben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	get_0x(int size)
{
	long	x;

	x = 1;
	while (size > 1)
	{
		x *= 10;
		size--;
	}
	return (x);
}

static int	ft_getlen(long n)
{
	int	r;

	r = 0;
	if (n < 0)
		n = -n;
	while (n > 9)
	{
		n = (n / 10);
		r++;
	}
	return (r + 1);
}

static char	*neg_nb(int nblen, long ncpy)
{
	int		x;
	char	*p1;
	char	*p;

	p = malloc(sizeof(char) * (nblen + 2));
	p1 = p;
	if (!p)
		return (NULL);
	*p = '-';
	ncpy = -ncpy;
	p++;
	while (nblen > 0)
	{
		x = get_0x(nblen);
		*p = ncpy / x + '0';
		ncpy = ncpy - (x * (*p - '0'));
		nblen--;
		p++;
	}
	*p = '\0';
	return (p1);
}

static char	*pos_nb(int nblen, int n)
{
	int		x;
	char	*p1;
	char	*p;

	p = malloc(sizeof(char) * (nblen + 1));
	if (!p)
		return (NULL);
	p1 = p;
	while (nblen > 0)
	{
		x = get_0x(nblen);
		*p = n / x + '0';
		n = n - (x * (*p - '0'));
		nblen--;
		p++;
	}
	*p = '\0';
	return (p1);
}

char	*ft_itoa(int n)
{
	int		nblen;
	long	ncpy;

	ncpy = n;
	nblen = ft_getlen(ncpy);
	if (n < 0)
		return (neg_nb(nblen, ncpy));
	else
		return (pos_nb(nblen, n));
}

int main()
{
	printf("%s", ft_itoa(0));
}