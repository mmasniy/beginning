#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (src[i])
			dst[i] = src[i];
		else
			while (i < n)
			{
				dst[i] = '\0';
				i++;
			}
		i++;
	}
	return (dst);
	
}
