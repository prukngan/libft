#include "libft.h"

char  *ft_substr(char const *s, unsigned int start, size_t len)
{
  char *sub;
  size_t i;

  sub = (char *)malloc(len + 1);
  i = 0;
  if (!sub && !s)
    return (NULL);
  while (s[start] && i < len)
    sub[i++] = s[start++];
  sub[i] = '\0';

  return (sub);
}

// int main()
// {
//   char *s = ft_substr("hello world", 6, 5);

//   printf("%s", s);
// }