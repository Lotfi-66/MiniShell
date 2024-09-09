


#include "../includes/libft.h"
#include <stdlib.h>

char	*ft_strtok_r(char *str, const char *delim, char **saveptr)
{
	char	*token;

	if (str != NULL)
	{
		*saveptr = str;
	}
	if (*saveptr == NULL || **saveptr == '\0')
	{
		return (NULL);
	}
	token = *saveptr;
	*saveptr = ft_strpbrk(token, delim);
	if (*saveptr != NULL)
	{
		*(*saveptr)++ = '\0';
	}
	return (token);
}
