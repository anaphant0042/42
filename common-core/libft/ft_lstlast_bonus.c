/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:19:46 by anlara-g          #+#    #+#             */
/*   Updated: 2024/09/28 14:14:16 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
/*
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*lst;

	node1 = ft_lstnew("rojo");
	node2 = ft_lstnew("amarillo");
	node3 = ft_lstnew("azul");
	ft_lstadd_front(&node1, node2);
	ft_lstadd_front(&node1, node3);
	lst = node1;
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
	printf("last element is: %s\n", (char *)ft_lstlast(node1)->content);

}
*/
