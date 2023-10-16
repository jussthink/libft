#include "./libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (n--)
	{
		if (p[i] == (unsigned char)c)
			return ((unsigned char *)&p[i]);
		i++;
	}
	return (NULL);
}
