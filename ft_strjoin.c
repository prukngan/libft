#include "libft.h"

char  *ft_strjoin(char const *s1, char const *s2)
{
  char  *str;
  size_t  i;

  str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
  i = 0;
  if (!str)
    return (NULL);
  while (*s1)
    str[i++] = *s1++;
  while (*s2)
    str[i++] = *s2++;
  str[i] = '\0';

  return (str);
}

// int main()
// {
//   char *s = ft_strjoin("hello", " wroldxxxxxxxxxxxxxx");

//   printf("%s", s);
// }