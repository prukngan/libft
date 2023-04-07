#include "libft.h"

char  *ft_strdup(const char *str)
{
  char    *buff;
  size_t  len;

  len = ft_strlen(str);
  buff = (char *)malloc(sizeof(*str) * (len + 1));
  if (buff)
  {
    buff = ft_memmove(buff, str, len);
    buff[len] = '\0';
  }
  return (buff);
}