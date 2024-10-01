/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:18:40 by anlara-g          #+#    #+#             */
/*   Updated: 2024/10/01 17:56:06 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*tmp;

	if (!*lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		tmp = current->next;
		del(current->content);
		free(current);
		current = tmp;
	}
	*lst = NULL;
}
