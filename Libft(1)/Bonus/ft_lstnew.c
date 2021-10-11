#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list		*p_list;

	p_list = (t_list*)malloc(sizeof(*list));
	if (list == NULL)
		return (NULL);
	list->next = NULL;
	list->content = content;
	return (p_list);
}
