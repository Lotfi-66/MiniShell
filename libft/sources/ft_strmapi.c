


#include "../includes/libft.h"

/******************************************************************************
 *
 * Transforme les caracteres d'une chaine en utilisant la fonction de rappel f
 * Verifie si s est nulle -> NULL dans ce cas
 * Alloue de la memoire pour une nouvelle chaine de taille ft_strlen(s) + 1
 * Boucle pour iterer a travers s en appelant f pour chaque caractere et
 * en remplacant le caractere correspondant dans la nouvelle chaine
 * Renvoie le pointeur vers la nouvelle chaine
 *
 *****************************************************************************/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
