#include "./libft.h"
void	ft_lstadd_front(t_list **alst, t_list *newlst)
{
	if (alst == NULL || newlst == NULL)
		return ;
	newlst->next = *alst;
	*alst = newlst;
}
