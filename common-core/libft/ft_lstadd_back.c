/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:18:07 by anlara-g          #+#    #+#             */
/*   Updated: 2024/10/01 17:47:57 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
	{
		return ;
	}
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*
int	main(void)
{
	t_list *node1;
	t_list *node2;
	t_list *lst;

	//node1 = ft_lstnew("Ana ");
	node2 = ft_lstnew("banana");
	//node2 = NULL;
	node1 = NULL; 
	ft_lstadd_back(&node1, node2);
	lst = node1;
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}
*/
