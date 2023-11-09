/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prukngan <phongsathon.rak2003@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 04:40:20 by prukngan          #+#    #+#             */
/*   Updated: 2023/11/09 21:19:43 by prukngan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*buff;
	size_t	len;

	len = num * size;
	if (len == 0)
		len = 1;
	else if (num == SIZE_MAX || size == SIZE_MAX
		|| (int)num < 0 || (int)size < 0)
		return (NULL);
	buff = malloc(len);
	if (buff != NULL)
	{
		while (len > 0)
		{
			((char *)buff)[len - 1] = 0;
			len--;
		}
	}
	return (buff);
}
