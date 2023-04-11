/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prukngan <phongsathon.rak2003@gmail.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 04:40:24 by prukngan          #+#    #+#             */
/*   Updated: 2023/04/08 19:09:03 by prukngan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buff;
	size_t	len_sub;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= start || len == 0)
		return (ft_strdup(""));
	len_sub = ft_strlen(&s[start]);
	if (len <= len_sub)
		len_sub = len;
	buff = malloc(len_sub + 1);
	if (buff == NULL)
		return (NULL);
	ft_strlcpy(buff, &s[start], len_sub + 1);
	return (buff);
}

// int main()
// {
//   char *s = ft_substr("hello world", 6, 5);

//   printf("%s", s);
// }
