#include "./libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	if (!(result = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	result = ft_lstnew(f(lst->content));
	temp = result;
	while (lst->next)
	{
		lst = lst->next;
		if (!(temp->next = ft_lstnew(f(lst->content))))
		{
			del(temp->content);
			return (NULL);
		}
		temp = temp->next;
	}
	return (result);
}