#include "./libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(&s1[start]);
	if (end)
	{
		while (s1[start + end - 1] && ft_strchr(set, s1[start + end - 1]))
			end--;
	}
	return (ft_substr(s1, start, end));
}
