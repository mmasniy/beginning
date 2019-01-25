#include "libft.h"

char	*ft_strnstr(const char *strB, const char *strA, size_t len)
{
	size_t	i;
	size_t 	j;

	i = -1;
	if (!ft_strlen((char*)strA))
		return ((char*)strB);
	if (!(ft_strlen((char*)strB) < ft_strlen((char*)strA)))
		while (strB[++i] && i < len)
		{
			j = 0;
			if (strB[i] == strA[j])
			{
				while (strB[i + j] == needl[j] && (i + j) < len)
				{
					j++;
					if (!(strA[j]))
						return ((char*)&strB[i]);
				}
			}
		}
	return (NULL);
}
