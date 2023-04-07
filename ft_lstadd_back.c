#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *buff;

    if (!lst && !new)
        return ;
    if (*lst)
    {
        buff = ft_lstlast(*lst);
        buff->next = new;
    }
    else
        *lst = new;
    new->next = NULL;
}