/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rben-mou <rben-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:52:16 by rben-mou          #+#    #+#             */
/*   Updated: 2022/10/22 19:12:19 by rben-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newone;
	t_list	*start;

	if (!lst || !f || !del)
		return (0);
	newone = malloc(sizeof(t_list));
	if (!newone)
		return (NULL);
	start = newone;
	while (lst->next)
	{
		newone->content = f(lst->content);
		newone->next = malloc(sizeof(t_list));
		if (!(newone->next))
		{
			ft_lstclear(&start, del);
			return (0);
		}
		newone = newone->next;
		lst = lst->next;
	}
	newone->content = f(lst->content);
	newone->next = 0;
	return (start);
}
