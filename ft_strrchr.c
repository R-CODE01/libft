/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rben-mou <rben-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:15:10 by rben-mou          #+#    #+#             */
/*   Updated: 2022/10/23 18:11:19 by rben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*r;

	r = 0;
	if (c == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (*s)
	{
		if (*s == (char)c)
			r = (char *)s;
		s++;
	}
	return (r);
}
