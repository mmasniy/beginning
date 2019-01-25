#include "libft.h"

char	*ft_strncat (char *restrict dst, const char *restrict app, size_t n)
{
	int i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (app[j] && (j < n))
	{
		dst[i] = app[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}
