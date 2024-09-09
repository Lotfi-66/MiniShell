


#include "../includes/libft.h"

/******************************************************************************
 *
 * teste s'il s'agit d'une lettre minuscule (ft_islower)
 * convertit la lettre c en majuscule
 *
 *****************************************************************************/
static int	ft_islower(int c)
{
	return (c >= 97 && c <= 122);
}

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}
