#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	i = ft_strlen((char*)s);
	while (s[i] != c)
	{
		if (s[i] == '0')
			return (NULL);
		i--;
	}
	return ((char*)&s[i]);
}
