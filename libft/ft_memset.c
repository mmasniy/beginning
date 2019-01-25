#include "libft.h"

void		*ft_memset (void *dst, int c, size_t len)
{
	size_t	i;
	unsigned char *a;

	a = (unsigned char*)dst;
	i = 0;
	while (i < len)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
