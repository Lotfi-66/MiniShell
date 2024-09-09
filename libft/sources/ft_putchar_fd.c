


#include "../includes/libft.h"

/******************************************************************************
 *
 * Permet d'ecrire un caractere sur un file descriptor
 * Utilise write qui permet d'ecrire des donnees dans un file descriptor
 *
 *****************************************************************************/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
