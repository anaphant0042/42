/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:19:55 by anlara-g          #+#    #+#             */
/*   Updated: 2024/10/01 17:57:16 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*head;
	t_list	*new;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	head = ft_lstnew(f(lst->content));
	temp = lst->next;
	while (temp)
	{
		new = ft_lstnew(f(temp->content));
		if (!new)
			ft_lstclear(&head, del);
		else
			ft_lstadd_back(&head, new);
		temp = temp->next;
	}
	return (head);
}
