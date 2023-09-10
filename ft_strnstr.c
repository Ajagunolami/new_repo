#include "libft.h"

char *ft_strnstr(const char *str, const char *tofind, size_t len)
{
	char *s;
	char *t;

	if (*str == '\0' || *tofind == '\0')
	{
		return(NULL);
	}
	if (*tofind == '\0')
	{
		return ((char *)str);
	}
	while (*str != '\0' && len > 0)
	{
		char *s = (char *)str;
		char *t = (char *)tofind;
		{
			while (*s == *t && *t != '\0' && len > 0)
			{
				s++;
				t++;
				len--;
				if (*t == '\0')
					return ((char *)str);
			}
		}
		str++;
		len--;
	}
	return (NULL);
}
int main() {
    const char *haystack = "Hello, world!";
    const char *needle = "world";

    char *result = ft_strnstr(haystack, needle, 13); // Searching within a limit of 13 characters

    if (result != NULL) {
        printf("Found: %s\n", result); // Output: Found: world!
    } else {
        printf("Not found\n");
    }

    return 0;
}
