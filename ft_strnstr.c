/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prukngan <phongsathon.rak2003@gmail.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 04:40:24 by prukngan          #+#    #+#             */
/*   Updated: 2023/04/08 19:07:22 by prukngan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t n)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(sub);
	if (*sub == 0)
		return ((char *)str);
	i = 0;
	while ((len + i) <= n && str[i])
	{
		if (ft_strncmp(&str[i], sub, len) == 0)
			return ((char *)(&str[i]));
		i++;
	}
	return (NULL);
}
