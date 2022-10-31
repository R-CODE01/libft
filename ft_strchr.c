/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rben-mou <rben-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:15:50 by rben-mou          #+#    #+#             */
/*   Updated: 2022/10/23 16:50:11 by rben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	char	*strcpy;

	strcpy = (char *)str;
	while (*strcpy)
	{
		if (*strcpy == (char)c)
			return (strcpy);
		strcpy++;
	}
	if (c != 0 && !*strcpy)
		return (0);
	return (strcpy);
}
