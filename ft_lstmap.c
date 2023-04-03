#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *newlst;
    
    if (!lst)
        return (NULL);
    newlst = ft_lstnew((*f)(lst->content));
    if (!newlst)
        return (NULL);
    newlst->next = ft_lstmap(lst->next, f, del);
    return (newlst);
}