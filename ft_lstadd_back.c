/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prukngan <phongsathon.rak2003@gmail.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 04:40:21 by prukngan          #+#    #+#             */
/*   Updated: 2023/04/08 04:40:21 by prukngan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
