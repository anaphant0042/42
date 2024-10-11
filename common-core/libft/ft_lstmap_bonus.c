/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:19:55 by anlara-g          #+#    #+#             */
/*   Updated: 2024/10/11 16:29:27 by anlara-g         ###   ########.fr       */
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
/*
int     main(void)
{
        t_list *node1;
        t_list *node2;
        t_list *node3;
        t_list *new;

        node1 = ft_lstnew("Ana ");
        node2 = ft_lstnew("banana");
        node3 = ft_lstnew("girasol");
        ft_lstadd_back(&node1, node2);
        ft_lstadd_back(&node2, node3);
        new = ft_lstmap(node1, &prueba, &del);
        while (new)
        {
                printf("%s\n", (char *)new->content);
                new = new->next;
        }
}
*/
