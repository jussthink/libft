#include "./libft.h"

void	ft_lstadd_back(t_list **lst, t_list *newlst)
{
	if (lst == NULL || newlst == NULL)
		return ;
	if (*lst == NULL)
		*lst = newlst;
	else
		ft_lstlast(*lst)->next = newlst;
}
