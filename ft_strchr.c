#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    if (!s)
        return (NULL);
    while (*s != (char)c)
    {
        if (*s == '\0')
            return (NULL);
        s++;
    }
    return ((char *)s);
}

/*
char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c && *s)
        ++s;
	if (*s)
        return ((char *)s);
	else if (!*s && 0 == (char)c)
        return ((char *)s);
	else
        return (NULL);
}
*/