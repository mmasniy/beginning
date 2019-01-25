#include "libft.h"

void		*ft_memcpy (void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char	*new_dst;
	unsigned char	*new_src;

	new_dst = (unsigned char*)dst;
	new_src = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		new_dst[i] = new_src[i];
		i++;
	}// you have to write this expression "dst = new_dst" if your programm didnt compile
	return (new_dst);
}

int main (void)
{
   // Исходный массив данных
   unsigned char src[10]="1234567890";

   // Вывод массива src на консоль
   printf ("src old: %s\n",src);

   // Копируем 3 байт
   ft_memcpy (&src[4], &src[3], 3);

   // Вывод массива src на консоль
   printf ("src new: %s\n",src);

   return 0;
}