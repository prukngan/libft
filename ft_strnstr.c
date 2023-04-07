/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prukngan <phongsathon.rak2003@gmail.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 04:40:24 by prukngan          #+#    #+#             */
/*   Updated: 2023/04/08 04:40:24 by prukngan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t n)
{
  size_t  len;

  len = ft_strlen(sub);
  if (len == 0)
    return ((char *)str);
  while (n-- > len)
  {  
    if (ft_strncmp(str, sub, len) == 0)
      return ((char *)str);
    str++;
  }
  return (NULL);
}

// int main()
// {
//   char *str = "The quick brown fox jumps over the lazy dog";
//   char *substr = "brown";
//   char *result = ft_strnstr(str, substr, 30);

//   if (result != NULL)
//       printf("Found substring '%s' in string '%s' at position %ld\n", substr, str, result - str);
//   else
//       printf("Substring '%s' not found in string '%s'\n", substr, str);
//   return 0;
// }
