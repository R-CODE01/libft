/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rben-mou <rben-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:07:45 by rben-mou          #+#    #+#             */
/*   Updated: 2022/10/23 17:46:34 by rben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	else
	{
		while (len != 0 && *haystack != '\0')
		{
			if (*haystack == needle[0] && len >= needle_len)
			{
				if (ft_strncmp(haystack, needle, needle_len) == 0)
					return ((char *)(haystack));
			}
			haystack++;
			len--;
		}
		return (NULL);
	}
}
