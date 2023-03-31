#include "libft.h"

size_t ft_strlen(const char *arg)
{
  unsigned int  i;

  i = 0;
  while (arg[i++]);
  return (i - 1);
}

// int main()
// {
//   printf("%d\n", (int)ft_strlen("hello"));
// }