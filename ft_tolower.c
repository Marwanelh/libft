#include "libft.h"

int tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return (c);
}
