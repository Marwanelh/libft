#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j;
    size_t  dst_len;
    size_t  src_len;

    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);

    if (dst_len >= size)
        return (size + src_len);
    i = dst_len;
    j = 0;
    while (src[j] && i < (size - 1))
    {
        dst[i] = src[j];
        j++;
        i++;
    }
    dst[i] = '\0';
    return (dst_len + src_len);
}
