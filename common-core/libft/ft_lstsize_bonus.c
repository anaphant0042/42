/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:20:28 by anlara-g          #+#    #+#             */
/*   Updated: 2024/09/25 16:20:35 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int			size;
	t_list	*temp;

	size = 0;
	temp = lst;
	while (temp)
	{
		++size;
		temp = temp->next;
	}
	return (size);
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
	printf("%i\n",ft_lstsize(node1));

}
*/
