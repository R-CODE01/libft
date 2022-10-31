/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rben-mou <rben-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:25:20 by rben-mou          #+#    #+#             */
/*   Updated: 2022/10/24 16:13:42 by rben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char *str, char charset)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == charset))
			i++;
		if (str[i])
		{
			count++;
			i++;
		}
		while (str[i] && (str[i] != charset))
			i++;
	}
	return (count);
}

static char	*ft_fillword(char *str, char charset)
{
	int		i;
	int		len;
	char	*p;

	len = 0;
	while (str[len] && (str[len] != charset))
			len++;
	i = 0;
	p = malloc(sizeof(*p) * (len + 1));
	if (!p)
		return (0);
	while (i < len)
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

static void	ft_free_it(char **r)
{
	char	**p;

	p = r;
	while (*r)
	{
		free(*r);
		r++;
	}
	free(p);
}

static char	**ft_fill_it(char **r, char *s, int len, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (i < len)
	{
		while (*s && (*s == c))
			s++;
		if (*s)
		{
			word = ft_fillword(s, c);
			if (!word)
			{
				ft_free_it(r);
				return (NULL);
			}
			r[i] = word;
			i++;
		}
		while (*s && (*s != c))
			s++;
	}
	r[i] = 0;
	return (r);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		len;
	char	*s1;

	if (!s)
		return (0);
	s1 = (char *)s;
	len = ft_wordcount(s1, c);
	result = ft_calloc((len + 1), sizeof(char *));
	if (!result)
		return (0);
	return (ft_fill_it(result, s1, len, c));
}
