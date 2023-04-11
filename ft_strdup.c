/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prukngan <phongsathon.rak2003@gmail.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 04:40:23 by prukngan          #+#    #+#             */
/*   Updated: 2023/04/08 18:58:25 by prukngan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*buff;
	size_t	len;

	len = ft_strlen(str);
	buff = (char *)malloc(sizeof(*str) * (len + 1));
	if (buff)
	{
		buff = ft_memmove(buff, str, len);
		buff[len] = '\0';
	}
	return (buff);
}
