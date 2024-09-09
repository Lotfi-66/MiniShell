

#include "../includes/libft.h"

/******************************************************************************
 *
 * Ecrit la chaine de caracteres sur le file descriptor specifie en
 * determinant la longueur de la chaine
 * Si chaine = NULL, la fonction ne fait rien
 *
 *****************************************************************************/
void	ft_putstr_fd(char const *s, int fd)
{
	if (s != NULL)
		write(fd, s, ft_strlen(s));
}
