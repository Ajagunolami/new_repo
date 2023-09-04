#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (!dest && !src)
		return(NULL);
	if (dest != src)
	{
		while(i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

int main()
{
	char *src= "abcdefghijklmnopqrstuvwxyz";
	char dest[27];

	ft_memcpy(dest, src, strlen(src));
	printf("dest: %s\n", dest);
}

