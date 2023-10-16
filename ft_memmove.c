#include "./libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned int	i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (dst == src || len == 0)
		return (dst);
	if (d < s)
		while (len--)
		{
			d[i] = s[i];
			i++;
		}
	else
	{
		i = len - 1;
		while (len--)
		{
			d[i] = s[i];
			i--;
		}
	}
	return (dst);
}
