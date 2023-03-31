#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len)
{
  char *pd;
  const char *ps;

  pd = dest;
  ps = src;
  if (pd < ps)
    ft_memcpy(pd, ps, len);
  else if (pd > ps)
  {
    while ((int)--len >= 0)
      pd[len] = ps[len];
  }
  
  return (dest);
}

int main()
{
  char str[] = "Hello World";
  char *src = str;
  char *dest = &str[2];

  printf("char dest: %c\n", *dest);
  ft_memmove(dest, src, 11);
  //printf("Result: %s\n", str);
  printf("str dest: %s\n", dest);

  return 0;
}