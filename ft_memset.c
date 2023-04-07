#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
  while (len > 0)
  {
    ((char *)dest)[len - 1] = c;
    len--;
  }
  
  return (dest);
}