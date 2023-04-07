#include "libft.h"

char  *clean_str(char const *s, char c)
{
  char  *str;
  char  *buff;
  size_t  i;

  i = 0;
  buff = ft_strtrim(s, &c);
  str = (char *)malloc(ft_strlen(buff));
  if (!str || !buff)
    return (NULL);
  while (buff[i])
  {
    str[i] = buff[i];
    i++;
    if (buff[i] == c)
    {
      str[i++] = 'x';
      while (buff[i] == c)
      {
        str[i] = buff[i];
        i++;
      }
    }
  }
  return (str);
}

char  **ft_split(char const *s, char c)
{
  char  *str;
  char  **split;
  size_t  len;
  size_t  i;

  str = clean_str(s, c);
  if (!s || !str)
    return (NULL);
  i = 0;
  len = ft_strlen(str);
  split = (char **)malloc(sizeof(char *) * len + 1);
  while (i < len)
  {
    split
  }
  split[i] = NULL;
  return (split);
}

int main()
{
  printf("%s", clean_str("hellozzworld", 'z'));
}