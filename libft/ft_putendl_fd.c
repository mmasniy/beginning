#include "libft.h"

void		ft_putendl_fd(char const *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen((char*)s));
	write(fd, "\n", 1);
}