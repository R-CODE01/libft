/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rben-mou <rben-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:15:57 by rben-mou          #+#    #+#             */
/*   Updated: 2022/10/21 16:13:54 by rben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*str1;

	str1 = (unsigned char *)str;
	while (len > 0)
	{
		*str1 = (unsigned char)c;
		len--;
		str1++;
	}
	return (str);
}
