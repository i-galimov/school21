#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del || !del)
		return (NULL);
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}
