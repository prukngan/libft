#include "libft.h"

void *ft_memset(void *dest, int x, size_t len)
{
  while (len > -1)
    ((unsigned char*)dest)[len--] = (unsigned char)x;
  
  return (dest);
}