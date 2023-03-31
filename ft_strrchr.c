#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
  const char *pt;

  pt = s + ft_strlen(s);
  while (*pt != c && pt >= s)
    pt--;
  if (*pt == c)
    return ((char *)pt);

  return (NULL);
}

// char	*ft_strrchr(const char *s, int c)
// {
//   size_t len;

//   len = ft_strlen(s);
//   while ((int)len-- && s[len] != c)
//     ;
//   if (s[len] == c)
//     return ((char *)(&s[len]));

//   return (NULL);
// }