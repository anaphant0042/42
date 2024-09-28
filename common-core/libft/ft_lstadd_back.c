/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:18:07 by anlara-g          #+#    #+#             */
/*   Updated: 2024/09/28 14:32:25 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	last->next = new;
}
/*
int	main(void)
{
	t_list *node1;
	t_list *node2;
	t_list *lst;

	node1 = ft_lstnew("Ana ");
	node2 = ft_lstnew("banana");
	ft_lstadd_back(&node1, NULL);
	lst = node1;
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}
*/
