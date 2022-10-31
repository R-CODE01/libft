/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rben-mou <rben-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:16:31 by rben-mou          #+#    #+#             */
/*   Updated: 2022/10/21 18:11:55 by rben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str1;

	str1 = (unsigned char *)str;
	while (n > 0)
	{
		if (*str1 == (unsigned char)c)
			return (str1);
		str1++;
		n--;
	}
	return (0);
}
