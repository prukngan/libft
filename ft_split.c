#include "libft.h"

char *strtrim_head(char const *s, char const *set)
{
  if (!s || !set)
    return (NULL);
  while (ft_strchr(set, *s) && *s)
      s++;
  return ((char *)s);
}

unsigned int  count_char(char const *s, char c)
{
  if (!s)
    return (-1);
  s = strtrim_head(s, &c);
  return (1 + count_char(ft_strchr(s, c), c));
}

char **ft_split(char const *s, char c)
{
  char  *pt;
  char  **split;
  size_t  i;

  i = 0;
  s = ft_strtrim(s, &c);
  split = (char **)ft_calloc((count_char(s, c) + 1), sizeof(char *) + 1);
  if (!split)
    return (NULL);
  pt = ft_strchr(s, c);
  while (pt)
  {
    split[i++] = ft_substr(s, 0, pt - s);
    if (!split[i - 1])
      return (NULL);
    pt = strtrim_head(pt, &c);
    s = pt;
    pt = ft_strchr(s, c);
  }
  split[i] = (char *)s;
  return (split);
}

// int main()
// {
//   char *str = "xaaxbxxccxx";
//   char *s1 = ft_strchr("\0", 0);
//   char *s2 = strchr("\0", 0);
//   char **split = ft_split("xaaxbxxccxx", 'x');
  
//   printf("str = %s\n", str);
//   while (*split)
//   {  
//     printf("split = %s\n", *split);
//     split++;
//   }
// }