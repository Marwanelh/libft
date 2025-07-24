#include "libft.h"

char    *ft_strdup(const char *src)
{
    char    *str;
    size_t  buf_size;

    buf_size = ft_strlen(src) + 1;
    str = malloc(buf_size);
    if (str == NULL)
        return (NULL);
    ft_strlcpy(str, src, buf_size);
    return (str);
}
