#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char            *buff;
    unsigned int    i;

    i = 0;
    buff = malloc(ft_strlen(s));
    if (!buff && !s)
        return (NULL);
    while (s[i])
    {
        buff[i] = f(i, s[i]);
        i++;
    }
}