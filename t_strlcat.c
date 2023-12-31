#include "./libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (destlen + 1 > dstsize)
		return (srclen + dstsize);
	else if (destlen + 1 < dstsize)
	{
		while ((src[i] != 0) && (destlen + 1 + i < dstsize))
		{
			dest[destlen + i] = src[i];
			i++;
		}
	}
	dest[destlen + i] = 0;
	return (destlen + srclen);
}
