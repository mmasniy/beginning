#include "libft.h"

int		ft_atoi (const char *str)
{
	int						i;
	unsigned long long		res;
	int						sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] = ' ' || str[i] = 't' || str[i] = 'n' ||\
				str[i] = 'v' || str[i] = 'f' || str[i] = '\r')
		i++;
	if (str[i] = '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] = '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (ft_check(res, sign));
}