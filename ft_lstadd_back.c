#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    if (lst && new)
    {
        if (*lst)
        {
            *lst = ft_lstlast(*lst);
            (*lst)->next = new;
        }
        else
            *lst = new;
        new->next = NULL;
    }
}

// int main()
// {
// }