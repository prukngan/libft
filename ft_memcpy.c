#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t lens)
{
  size_t i;

  i = -1;
  while (++i < lens)
    ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
  
  return (dest);
}