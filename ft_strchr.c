#include "./libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	c = (char)c;
	i = 0;
	while (s[i] != c)
	{
		if (!s[i])
			return (NULL);
		i++;
	}
	return ((char *)&s[i]);
}
