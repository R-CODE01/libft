/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rben-mou <rben-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:31:01 by rben-mou          #+#    #+#             */
/*   Updated: 2022/10/27 08:07:24 by rben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	skip_space(const char *str, int i)
{
	while (str[i] != '\0' && (str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\t' || str[i] == '\v' || str[i] == ' '))
		i++;
	return (i);
}

int	check_sign(const char *str, int i, int *m)
{
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*m = -1;
		i++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					m;
	long long			acc;
	long long			r;
	int					overflow;

	m = 1;
	i = 0;
	r = 0;
	overflow = 0;
	i = skip_space(str, i);
	i = check_sign(str, i, &m);
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		acc = (r * 10) + (str[i] - '0');
		if (r > acc)
			overflow = 1;
		r = acc;
		i++;
	}
	if (overflow == 1 && m == -1)
		return ((int)LONG_MIN);
	else if (overflow == 1 && m == 1)
		return ((int)LONG_MAX);
	return ((r) * m);
}
