#include "libft.h"

int ft_isalpha(int arg)
{
  if ((arg >= 'A' && arg <= 'Z') || (arg >= 'a' && arg <= 'z'))
    return (1);
  return (0);
}