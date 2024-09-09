


#include "../includes/libft.h"

/******************************************************************************
 *
 * Prend en entree un entier c representant un caractere ASCII
 * Renvoie 1 si le caractere est une lettre (ft_isalpha)
 * ou un chiffre (ft_isdigit). Renvoie 0 dans le cas contraire
 *
 *****************************************************************************/
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
