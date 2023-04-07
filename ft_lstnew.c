/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prukngan <phongsathon.rak2003@gmail.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 04:40:22 by prukngan          #+#    #+#             */
/*   Updated: 2023/04/08 04:40:22 by prukngan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
