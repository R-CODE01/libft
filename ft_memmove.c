/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rben-mou <rben-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:14:18 by rben-mou          #+#    #+#             */
/*   Updated: 2022/10/25 09:26:19 by rben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*src1;
	char		*dst1;

	src1 = (const char *)src;
	dst1 = (char *)dst;
	if (dst == src)
		return (dst);
	if (src1 < dst1)
	{
		dst1 += len - 1;
		src1 += len - 1;
		while (len > 0)
		{
			*dst1 = *src1;
			dst1--;
			src1--;
			len--;
		}
	}
	else
		ft_memcpy (dst1, src1, len);
	return (dst);
}
