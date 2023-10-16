#include "./libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ps;
	size_t			i;

	ps = (unsigned char *)s;
	i = 0;
	while (i < n)
		ps[i++] = '\0';
}
