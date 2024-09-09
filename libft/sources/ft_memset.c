


#include "../includes/libft.h"

/******************************************************************************
 *
 * Remplit une zone memoire avec un caractere donne
 * s pointeur vers la zone memoire a remplir, c caractere utilise pour
 * remplir la memoire, n taille en octets de la zone a remplir
 * Utilise une boucle pour iterer n fois et remplir la memoire avec src
 * a chaque iteration.
 * Renvoie s une fois la memoire remplie
 *
 *****************************************************************************/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	src;
	size_t			i;

	i = 0;
	new_dest = s;
	src = c;
	while (i++ < n)
		*new_dest++ = src;
	return (s);
}
