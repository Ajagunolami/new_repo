#include "libft.h"

size_t ft_strlen(const char *str)
{
	size_t i; 

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

size_t ft_strlcat(const char *dst, const char *src, size_t size)
{
	size_t rem_size;

	ft_strlen(dst);
	rem_size = ft_strlen(dst) - size;


