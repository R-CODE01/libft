/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rben-mou <rben-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:46:03 by rben-mou          #+#    #+#             */
/*   Updated: 2022/10/23 09:59:07 by rben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmpc;

	if (!lst || !del || !*lst)
		return ;
	while (*lst)
	{
		tmpc = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmpc;
	}
}
