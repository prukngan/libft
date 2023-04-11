/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prukngan <phongsathon.rak2003@gmail.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 04:40:22 by prukngan          #+#    #+#             */
/*   Updated: 2023/04/08 18:48:58 by prukngan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*pd;
	const char	*ps;

	pd = dest;
	ps = src;
	if (pd < ps)
		ft_memcpy(pd, ps, len);
	else if (pd > ps)
	{
		while ((int)--len >= 0)
			pd[len] = ps[len];
	}
	return (dest);
}
