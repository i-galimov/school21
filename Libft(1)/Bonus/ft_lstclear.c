#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list		*list;
	t_list		*new;

	if (!lst || !*lst)
		return (NULL) ;
	list = *lst;
	while (list != NULL)
	{
		new = list;
		list = list->next;
		del(new->content);
		free(new);
	}
	*lst = NULL;
}
