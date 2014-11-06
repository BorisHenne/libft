#include "libft.h"

size_t strlcat(char * restrict dst, const char * restrict src, size_t size)
{
	size_t dest_len;
	int i;

	dest_len = ft_strlen(dest);
	i = 0;
	while(i < size && src[i] != '\0')
	{
		i++;
	}
return(dest_len + i);
}
