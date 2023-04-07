/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prukngan <phongsathon.rak2003@gmail.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 04:40:24 by prukngan          #+#    #+#             */
/*   Updated: 2023/04/08 04:40:24 by prukngan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
  size_t len;

  if (!s1 || !set)
    return (NULL);
  while (ft_strchr(set, *s1) && *s1)
      s1++;
  len = ft_strlen(s1);
  while (ft_strchr(set, s1[len - 1]) && len)
      len--;
  
  return (ft_substr(s1, 0, len));
}
