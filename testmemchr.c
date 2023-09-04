#include "libft.h"


// Custom memchr function
void *ft_memchr(const void *s, int c, size_t n) 
{
    const unsigned char *p;
    size_t i;

    p = s;
    i = 0;
    while(i < n)
    {
        if (*p == (unsigned char)c) 
	{
            return (void *)p;
        }
        p++;
	i++;
    }
    return NULL;
}

int main() {
    const char *str = "Hello, world!";
    char searchChar = 'o';

    // Search for 'o' in the string using custom my_memchr
    const char *result = (const char *)ft_memchr(str, searchChar, strlen(str));

    if (result != NULL) {
        printf("Found '%c' at position %ld\n", searchChar, result - str);
    } else {
        printf("'%c' not found in the string.\n", searchChar);
    }

    return 0;
}

