#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list *head;
	t_list *new;

	head = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
			ft_lstclear(&head, del);
		else
			ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}
