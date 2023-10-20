/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:01:29 by long              #+#    #+#             */
/*   Updated: 2023/10/20 14:21:18 by long             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*begin;
	t_list	*next;

	if (!lst || !del || !f)
		return (NULL);
	begin = ft_lstnew(f(lst->content));
	if (!begin)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		next = ft_lstnew(f(lst->content));
		if (!next)
		{
			ft_lstclear(&begin, del);
			return (NULL);
		}
		ft_lstadd_back(&begin, next);
		lst = lst->next;
	}
	return (begin);
}
