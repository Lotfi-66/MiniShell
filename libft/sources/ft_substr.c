


#include "../includes/libft.h"

/******************************************************************************
 *
 * Verifie si s est nulle -> NULL dans ce cas
 * Verifie si la longueur de s < longueur de start -> chaine vide dans ce cas
 * Alloue de la memoire pour chaine de taille len + 1 pour accueillir la
 * sous chaine
 * Boucle qui copie les caracteres de s a partir de start
 * Renvoie le pointeur vers la nouvelle chaine
 *
 *****************************************************************************/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	count;
	size_t	size;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	count = 0;
	while (count < len)
	{
		str[count] = s[start + count];
		count ++;
	}
	str[count] = '\0';
	return (str);
}
