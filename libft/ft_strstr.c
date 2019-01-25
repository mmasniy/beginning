#include "libft.h"

char	*ft_strstr(const char *strB, const char *strA)
{
	int i;
	int j;
	int a;

	i = 0;
	if (strB == '\0')
		return ((char*)strB);
	while (strB[i])
	{
		j = 0;
		if (strB[i] == strA[j])
		{
			a = i;
			while ((strB[a] == strA[j]) && strB[a])
			{
				a++;
				j++;
			}
			if (!(strA[j]))
				return ((char*)&strB[i]);
		}
		i++;
	}
	return (NULL);
}
