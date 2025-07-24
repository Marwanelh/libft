#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t  i;

    if (!s)
        return;
    i = 0;
    while (i < n)
    {
        *(char*)(s + i) = 0;
        i++;
    }
}

/*
void    ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}
*/
