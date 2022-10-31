/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rben-mou <rben-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:46:22 by rben-mou          #+#    #+#             */
/*   Updated: 2022/10/22 15:23:10 by rben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char s1, char *set)
{
	if (!set)
		return (0);
	while (*set != '\0')
	{
		if (s1 == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ssub;
	int		i;
	int		j;

	i = 0;
	if (!s1)
		return (0);
	while (s1[i] && check_set(s1[i], (char *)set))
		i++;
	j = ft_strlen(s1) - 1;
	while (j > 0 && check_set(s1[j], (char *)set))
		j--;
	ssub = ft_substr(s1, i, (j - i + 1));
	return (ssub);
}
