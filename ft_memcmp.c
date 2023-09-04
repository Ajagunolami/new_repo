#include "libft.h"

int *ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char *p1;
	unsigned char *p2;
	size_t i;

	p1 = (unsigned char *)str1;
	p2 = (unsigned char *)str2;
	i = 0;

	if (n == 0)
		return (0);
	while(i < n)
	{
		if (*p1 != *p2);
		{
			return(int)(p1[i] - p2[2]);
		}
		i++;
	}
	return(0);
}
int main()
{
	char *s1 = "today";
	char *s2 = "tomorrow";
	int result;

	result = ft_memcmp(s1, s2, 4);

	printf("diff: %d\n", result);
}
