#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char*)s)[i] == (unsigned char)c)
			return (&((unsigned char*)s)[i]);
		i++;
	}
	return (NULL);
}

// void	*ft_memchr2(const void *s, int c, size_t n)
// {
//   size_t i;
  
//   i = 0;
//   while (((unsigned char*)s)[i] != (unsigned char)c && ++i < n)
//     ;
//   if (i >= n)
//     return (NULL);
//   return (&((unsigned char*)s)[i]);
// }