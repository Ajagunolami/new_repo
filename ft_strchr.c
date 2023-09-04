#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while ((char)c != *str)
	{
		if (!*str)
			return (0);
		str++;
	}
	return ((char *)str);
}
int main()
{
    const char *str = "Hello, World!";
    int searchChar = 'W'; // ASCII value of 'W'

    char *result = ft_strchr(str, searchChar);

    if (result != NULL) 
    {
        printf("Character '%c' found at position %ld in the string: \"%s\"\n", searchChar, result - str, str);
    } else 
    {
        printf("Character '%c' not found in the string: \"%s\"\n", searchChar, str);
    }

    return 0;
}
