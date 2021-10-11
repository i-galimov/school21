#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list		*list;

	if (lst == NULL)
		return (NULL);
	list = lst;
	while (list->next != NULL)
	{
		(*f)(list->content);
		list = list->next;
	}
	f(list->content);
}
