//The strrchr() function finds the last occurrence of a character in a string. The character c can be the null character (\0); 
//the ending null character of string is included in the search.

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    int i;
    i = ft_strlen(str);
    while (i >= 0)
    {
        if (str[i] == (char)c)
            return(str + i);
        i --;
    }
    return (NULL);
}
