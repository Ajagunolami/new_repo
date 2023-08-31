#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)

{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n) && (str1[i] || str2[i]))
	{
		if (str[i] != str[2])
			return (((unsingned char)str1[i] - (unsigned char)str2[i]));
		i++;
	}
	return (0);
}
