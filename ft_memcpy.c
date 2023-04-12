/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prukngan <phongsathon.rak2003@gmail.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 04:40:22 by prukngan          #+#    #+#             */
/*   Updated: 2023/04/12 15:59:35 by prukngan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t lens)
{
	size_t	i;

	if (src == NULL && dest == NULL)
		return (dest);
	i = -1;
	while (++i < lens)
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	return (dest);
}
