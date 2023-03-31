#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  while (n > 0 && *s1 && *s2)
  {
    if (*s1 != *s2)
      return (*s1 - *s2);
    n--;
    s1++;
    s2++;
  }
  return 0;
}

// int main()
// {
//   char *s1 = "hello";
//   char *s2 = "hellO";

//   ft_strncmp(s1, s2, 5);
//   printf("%c", *s1);
//   printf("%c", *s2);
// }
