#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new_line;
	int		i;

	i = 0;
	if (!(new_line = malloc(ft_strlen((char*)s1) + 1)))
		return (NULL);
	while (s1[i])
	{
		new_line[i] = s1[i];
		i++;
	}
	new_line[i] = '\0';
	return (new_line);
}
