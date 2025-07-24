#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    size_t  bytes;
    void    *ptr;

    bytes = nmemb * size;
    if (size != 0 && bytes / size != nmemb)
        return (NULL);
    ptr = malloc(bytes);
    if (ptr == NULL)
        return (NULL);
    ft_bzero(ptr, bytes);
    return (ptr);
}
