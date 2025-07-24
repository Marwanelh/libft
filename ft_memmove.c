#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t  i;

    if (!dst || !src)
        return (NULL);
    if (dst > src)
    {
        i = len - 1;
        while (i >= 0)
        {
            *(char*)(dst + i) = *(char*)(src + i);
            i--;
        }
    }
    else
    {
        i = 0;
        while (i < len)
        {
            *(char*)(dst + i) = *(char*)(src + i);
            i++;
        }
    }
    return (dst);
}
