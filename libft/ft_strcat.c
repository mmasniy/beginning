#include "libft.h"

char	*ft_strcat (char *restrict dst, const char *restrict app)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (app[j])
	{
		dst[i] = app[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}
