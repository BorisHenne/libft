#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	char	*result;

	dst = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 && s2)
		return (ft_strdup((char *)s2));
	else if (s1 && !s2)
		return (ft_strdup((char *)s1));
	else if (!s1)
		return (NULL);
	if (!dst)
		return (NULL);
	result = dst;
	while (*s1)
	{
		*dst = *s1;
		dst++;
		s1++;
	}
	while (*s2)
	{
		*dst = *s2;
		dst++;
		s2++;
	}
	*dst = 0;
	return (result);
}
