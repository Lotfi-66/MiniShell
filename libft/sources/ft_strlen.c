


#include "../includes/libft.h"

/******************************************************************************
 *
 * Boucle qui compte le nombre de caracteres dans s
 * Retourne le nombre de caracteres
 *
 *****************************************************************************/
size_t	ft_strlen(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
