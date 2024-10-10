/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:19:07 by anlara-g          #+#    #+#             */
/*   Updated: 2024/09/25 16:19:33 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *temp;

	if (!lst || !f)
		return ;
	temp = lst;
	while (lst)
	{
		f(temp->content);
		temp = temp->next;
	}
}
