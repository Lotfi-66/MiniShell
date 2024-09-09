


#include "../includes/libft.h"

/******************************************************************************
 *
 * verifie s'il s'agit d'une majuscule (ft_isupper)
 * convertit en minuscule
 *
 *****************************************************************************/
static int	ft_isupper(int c)
{
	return (c >= 65 && c <= 90);
}

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}
