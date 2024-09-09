


#include "../includes/libft.h"

/******************************************************************************
 *
 * Copie les caracteres de src dans dest jusqu'a atteindre la longueur de src
 * ou que size -1 caracteres aient ete copies
 * Retourne la longueur totale de src
 *
 *****************************************************************************/
size_t	ft_strlcpy(char *dest, char const *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	while (src[src_len])
	{
		src_len++;
	}
	if (size == 0)
	{
		return (src_len);
	}
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
