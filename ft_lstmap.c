#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *newlst;
    t_list  *buff;

    if (!lst)
        return (NULL);
    newlst = buff;
    while (lst)
    {
        buff = ft_lstnew(f(lst->content));
        if (!buff)
        {
            ft_lstclear(&newlst, del);
            return (NULL);
        }
        buff->next;
        lst->next;
    }
    return (newlst);
}