#include "libft.h"

void		ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*s1;

	s1 = (char*)s;
	i = 0;
	while (i < n)
	{
		s1[i] = '\0';
		i++;
	}
}
