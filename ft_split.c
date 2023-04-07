#include "libft.h"

int  num_word(char const *s, char c)
{
  int  n;

  n = 0;
  while (s && *s)
  {
    if (*s == c)
      s++;
    else
    {
      n++;
      s = ft_strchr(s, c);
    }
  }
  return (n);
}

char  **ft_split(char const *s, char c)
{
  char **split;
  int  len;
  int  i;
  int  num;
  
  num = num_word(s, c);
  i = 0;
  split = (char **)malloc(sizeof(char *) * (num + 1));
  if (!split && num == 0)
    return (NULL);
  while (i < num)
  {
    while (*s == c)
      s++;
    len = 0;
    while (s[len] != c && s[len])
      len++;
    split[i] = ft_substr(s, 0, len);
    i++;
    s += len;
  }
  split[i] = NULL;
  return (split);
}

// int main()
// {
//   printf("%s", clean_str("hellozzworld", 'z'));
// }