/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prukngan <phongsathon.rak2003@gmail.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 04:40:24 by prukngan          #+#    #+#             */
/*   Updated: 2023/04/12 17:22:45 by prukngan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t n)
{
	size_t	len;
	size_t	i;

	if (*sub == 0)
		return ((char *)str);
	if (n == 0)
		return (NULL);
	len = ft_strlen(sub);
	i = 0;
	while (str[i] && (len + i) <= n)
	{
		if (ft_strncmp(&str[i], sub, len) == 0)
			return ((char *)(&str[i]));
		i++;
	}
	return (NULL);
}
