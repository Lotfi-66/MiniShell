


#include "../includes/libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*dest_start;

	dest_start = dest;
	while (n > 0)
	{
		if (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
		else
			*dest = '\0';
		n--;
	}
	return (dest_start);
}
