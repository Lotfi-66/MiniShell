


#include "../includes/libft.h"

/******************************************************************************
 *
 * Verifie d'abord si la chaine de caracteres est non nulle
 * Si fonction nulle -> la fonction s'arrete
 * Si fonction non nulle, elle appelle ft_putstr_fd puis ft_putchar_fd
 * Sert a ecrire la chaine de caracteres s dans le fils descriptor fd
 * suivie d'un retour a la ligne
 *
 *****************************************************************************/
void	ft_putendl_fd(char const *s, int fd)
{
	if (s != NULL)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
