#include "./libft.h"

char	*ft_strdup(const char *s1)
{
	char	*d;
	int		i;
	int		len;

	if (!s1)
		return (NULL);
	len = ft_strlen((char *)s1);
	if (!(d = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		d[i] = s1[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
