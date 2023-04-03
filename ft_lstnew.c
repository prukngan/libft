#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *newlst;

    newlst = (t_list*)malloc(sizeof(t_list));
    if (!newlst)
        return (NULL);
    newlst->content = content;
    newlst->next = NULL;
    return (newlst);
}

// void    main()
// {
//     int *n = malloc(sizeof(int) * 6);

//     for(int i = 0; i < 7; i++)
//         n[i] = i;
// }