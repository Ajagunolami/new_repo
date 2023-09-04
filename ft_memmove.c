#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	char j;
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;

	if (!dest && !src)
		return(NULL);
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	if (d > s)
	{
		i = n;
		while (i > 0)
		{
			d[i -1] = s[i - 1];
			i--;
		}
	}
	return(dest);
}
int main()
{
	char str1[]= "Hello world!";
	char str2[20];
	ft_memmove(str2, str1, 13);

	printf("str2: %s\n", str2);
}
