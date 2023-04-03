#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;

    i = 0;
    if (s && f)
    {
        while (*s)
            f(i++, s++);
    }
}

// void main()
// {
//     char s[10];
//     int i = 0;

//     ft_striteri("hello", f(i, s));
// }