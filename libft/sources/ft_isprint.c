


#include "../includes/libft.h"

/******************************************************************************
 *
 * booleen indiquant si le caractere passe en argument est un
 * caractere imprimable. Renvoie 1 si vrai, 0 si faux
 *
 *****************************************************************************/
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
