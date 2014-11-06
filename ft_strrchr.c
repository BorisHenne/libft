#include "libft.h"

char *strrchr(const char *s, int c);
{
	int i;
	char *result;

	i = ft_strlen(s);
	if(ft_isprint(c))
	{
		while (c != s[i])
			i--;
		if (c == s[i])
		{
			return(result = (&s[i] - &s[0]);
		}
		else
			return(result = NULL);
	}
	else
		return (result = NULL);
}
