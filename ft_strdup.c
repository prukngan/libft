#include "libft.h"

char *ft_strdup(const char *str)
{
  char *buff;
  size_t len;

  len = ft_strlen(str);
  buff = (char *)malloc(len + 1);
  if (buff)
    ft_memmove(buff, str, len + 1);

  return (buff);
}