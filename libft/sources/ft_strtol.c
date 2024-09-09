


#include "../includes/libft.h"

static int	is_valid_digit(char c, int base)
{
	if (ft_isdigit(c))
		return (c - '0' < base);
	return (0);
}

long	ft_strtol(const char *str, char **endptr, int base)
{
	long	result;
	char	*tempendptr;

	result = ft_atoi(str);
	tempendptr = (char *)str;
	while (is_valid_digit(*tempendptr, base))
		tempendptr++;
	if (endptr != NULL)
		*endptr = tempendptr;
	if (result > LONG_MAX)
		result = LONG_MAX;
	else if (result < LONG_MIN)
		result = LONG_MIN;
	return (result);
}
