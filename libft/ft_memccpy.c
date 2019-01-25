#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,\
					int c, size_t len)
{
	size_t	i;
	unsigned char *new_dst;
	unsigned char *new_src;

	new_dst = (unsigned char*)dst;
	new_src = (unsigned char*)src;
	i = 0;
	while (new_dst[i] != c || i < len)
	{
		new_dst[i] = new_src[i];
		i++;
	}
	return (new_dst);
}
