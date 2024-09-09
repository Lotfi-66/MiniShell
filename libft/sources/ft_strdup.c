


#include "../includes/libft.h"

/******************************************************************************
 *
 * Duplique une chaine de caracteres
 * Alloue de la memoire pour une nouvelle chaine de caracteres de la
 * meme longueur que s + \0 (ft_strlen)
 * Si l'allocation echoue -> NULL
 * Boucle utilisee pour copier les caracteres de s dans str. Boucle terminee
 * lorsqu'elle rencontre \0 de s
 * Ajoute \0 a la fin de la nouvelle chaine
 * Renvoie un pointeur vers le debut de la nouvelle chaine
 *
 *****************************************************************************/
char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;
	int		len;

	i = -1;
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (str);
	while (s[++i])
		str[i] = s[i];
	str[i] = '\0';
	return (str);
}
