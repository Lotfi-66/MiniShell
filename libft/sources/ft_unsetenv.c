


#include "../includes/libft.h"

int	ft_unsetenv(const char *name)
{
	if (name == NULL || name[0] == '\0' || strchr(name, '=') != NULL)
	{
		errno = EINVAL;
		return (-1);
	}
	return (ft_putenv((char *)name));
}
