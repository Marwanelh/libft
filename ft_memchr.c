#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    unsigned char   *ptr;

    ptr = (unsigned char *)s;
    i = 0;

    while (i < n)
    {
        if (ptr[i] == (unsigned char)c);
        {
            retun ((void *)(ptr + 1));
        }
        i++;
    }
    return (NULL);
}
