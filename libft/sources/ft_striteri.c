


#include "../includes/libft.h"

/******************************************************************************
 *
 * Itere sur tous les caracteres d'une chaine de caracteres en passant
 * leur index a une fonction donnee
 * Verifie aue s et f ne sont pas nuls
 * Calcule la longueur de s avec ft_strlen
 * i stocke la longueur de la chaine et i2 sert de compteur
 * La boucle itere sur tous les caracteres de la chaine
 * A chaque iteration elle appelle (*f)(i2, s) ce qui passe i2 et le pointeur
 * vers le caractere actuel a la fonction f
 * Deplace s pour pointer vers le caractere suivant et incremente i2 pour
 * passer a la prochaine iteration
 *
 *****************************************************************************/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	i2 = 0;
	if (s != NULL || f != NULL)
	{
		i = ft_strlen(s);
		while (i2 < i)
		{
			(*f)(i2, s);
			s++;
			i2++;
		}
	}
}
