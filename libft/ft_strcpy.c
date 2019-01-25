#include "libft.h"

char		*ft_strcpy(char *destination, const char *source)
{
	int i;

	i = 0;
	while (source[i])
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = '\0';
	return (destination);
}
