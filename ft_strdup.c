/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rben-mou <rben-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:38:16 by rben-mou          #+#    #+#             */
/*   Updated: 2022/10/23 18:50:53 by rben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;

	ptr = ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, s1, ft_strlen(s1) + 1);
	return (ptr);
}
