#include "libft.h"

void *ft_calloc(size_t num, size_t size)
{
  int *buff;

  buff = malloc(num * size);
  if (buff != NULL)
    ft_memset(buff, 0, num * size);
  
  return (buff);
}