#include "libft.h"

void *ft_memset(void *dest, int x, size_t len)
{
  while ((int)len > -1)
    ((unsigned char*)dest)[(int)len--] = (unsigned char)x;
  
  return (dest);
}