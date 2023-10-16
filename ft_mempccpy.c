#include "./libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	find;
	size_t			i;

	find = c;
	i = 0;
	d = dst;
	s = (unsigned char *)src;
	if (!src && !dst)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == find)
			return (d + (i + 1));
		i++;
	}
	return (NULL);
}
