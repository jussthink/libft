#include "./libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*d;
	char	*s;
	int		i;

	d = (char *)s1;
	s = (char *)s2;
	i = 0;
	while (n--)
	{
		if (d[i] != s[i])
			return ((unsigned char)d[i] - (unsigned char)s[i]);
		i++;
	}
	return (0);
}
