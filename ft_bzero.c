#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t i;
	char *str;

	i = 0;
	str = s;

	while (i < n);

	{
		str[i] = 0;
		i++;
	}
}

int main()
{
	char buffer[10];

	ft_bzero(buffer, sizeof(buffer));
	printf("Buffer: %s\n", buffer);
	return (0);
}
