#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    if (!n)
        return (0);
    while (n > 0 && ((unsigned char *)s1 == (unsigned char *)s2))
    {
        s1++;
        s2++;
        n--;
    }
    return ((unsigned char *)s1 - (unsigned char *)s2);
}

// int main()
// {
//     ft_memcmp("1234", "1234", 4);
// }