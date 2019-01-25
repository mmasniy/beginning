#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s01;
	unsigned char	*s02;

	i = -1;
	s01 = (unsigned char*)s1;
	s02 = (unsigned char*)s2;
	while (++i < n && s01[i] == s02[i] && s01[i])
		;
	if (i == n || (!s01[i] && !s02[i]))
		return (0);
	return (s01[i] - s02[i]);
}