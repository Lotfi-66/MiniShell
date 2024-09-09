


#include "../includes/libft.h"

/******************************************************************************
 *
 * booleen indiquant si le caractere passe en argument est
 * un caractere ASCII valide. Si c'est le cas renvoie 1. Sinon renvoie 0
 *
 *****************************************************************************/
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
