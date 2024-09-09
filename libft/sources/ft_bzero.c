

#include "../includes/libft.h"

/*****************************************************************************
 *
 *  prend en entree un pointeur s sur un espace memoire et une taille n
 *  en octet
 *  Initialise a 0 n octets de l espace memoire en utilisant un pointeur
 *  de type unsigned char
 *  La boucle while parcourt l'espace memoire et met a 0 chaque octet
 *  jusqu'a ce que i atteigne n.
 *
 ****************************************************************************/
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = s;
	i = 0;
	while (i++ < n)
		*dest++ = 0;
}
