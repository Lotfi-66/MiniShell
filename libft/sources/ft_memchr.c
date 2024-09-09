


#include "../includes/libft.h"

/******************************************************************************
 *
 * Parcourt les n 1ers octets de la memoire de s en comparant chaque
 * octet avec c
 * Si un octet correspondant est trouve -> pointeur vers l'octet
 * Si non -> NULL
 *
 *****************************************************************************/
void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (0);
}
