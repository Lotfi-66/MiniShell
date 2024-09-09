


#include "../includes/libft.h"

int	ft_isspecialchar(char c)
{
	if ((c == 33) || (c >= 35 && c <= 38)
		|| (c >= 40 && c <= 57) || (c >= 58 && c <= 64)
		|| (c >= 91 && c <= 96) || (c >= 123 && c <= 126))
		return (1);
	return (0);
}
