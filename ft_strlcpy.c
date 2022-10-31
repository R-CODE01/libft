/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rben-mou <rben-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:15:39 by rben-mou          #+#    #+#             */
/*   Updated: 2022/10/23 17:15:59 by rben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	l;

	l = 0;
	while (src[l] != 0)
		l++;
	if (dstsize > 0)
	{
		while (*src != '\0' && dstsize - 1 > 0)
		{
			*dst = *src;
			dst++;
			src++;
			dstsize--;
		}
		*dst = 0;
	}
	return (l);
}
