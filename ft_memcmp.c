#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char    *buff1;
    char    *buff2;
    size_t  i;

    buff1 = (char *)s1;
    buff2 = (char *)s2;
    i = 0;
    while (i < n)
    {
        if (buff1[i] != buff2[i])
            return ((unsigned char)buff1[i] - (unsigned char)buff2[i]);
        i++;
    }
    return (0);
}