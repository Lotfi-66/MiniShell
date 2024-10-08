


#include "../includes/libft.h"

/******************************************************************************
 *
 * Prend en entree un entier c representant un caractere ASCII
 * Verifie si c est compris entre A et Z pour les majuscules
 * et est compris entre a et z pour les minuscules.
 * Renvoie 1 si c'est le cas. Sinon renvoie 0
 *
 *****************************************************************************/
int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
