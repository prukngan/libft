#include "libft.h"

int		ft_atoi(const char *c)
{
  long int res;
  int neg;

  res = 0;
  neg = 1;
  while (((*c >= 9 && *c <= 13) || *c == ' ')
        || (*c == '+' && ft_isdigit(*c + 1)))
    c++;
  if (*c == '-')
  {
    neg = -1;
    c++;
  }
  while (*c >= '0' && *c <= '9')
    res = (*c++ - 48) + (res * 10);
  return (neg * res);
}

int main(void)
{
  printf("result = %d", ft_atoi("\r\f\v\n-12345"));
}