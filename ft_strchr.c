#include "libft.h"

void *ft_strrchr(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i] != c)
	{
		if (str[i] == '\0')
		{
			return (NULL);
		}
		i++;
		str++;
	}
	return (str);
}
 int		main(void)
{
	char str[] = "Lucas";
	char	a;

	a = 'u';
	ft_strchr(str, a);
	printf("%s", (char *)ft_strchr(str, a));
	printf("\n");
	printf("%s", strchr(str, a));
	return (0);
}

~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
ft_strchr.c[+] [unix] (13:40 31/08/2023)                                                                                                                                                                                                                                  19,1 All
-- INSERT --

~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
ft_strchr.c[+] [unix] (13:40 31/08/2023)                                                                                                                                                                                                                                  19,1 All
-- INSERT --

