/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prukngan <phongsathon.rak2003@gmail.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 04:40:20 by prukngan          #+#    #+#             */
/*   Updated: 2023/04/08 17:43:13 by prukngan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	int	*buff;

	if (num == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	buff = malloc(num * size);
	if (buff != NULL)
		ft_memset(buff, 0, num * size);
	return (buff);
}
