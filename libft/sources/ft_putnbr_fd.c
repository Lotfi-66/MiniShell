


#include "../includes/libft.h"

/******************************************************************************
 *
 * Affiche un entier sur la sortie standard associee au file descriptor
 * Definit une variable nb utilisee pour afficher la valeur absolue de n
 * Ensuite utilise une recursion pour afficher les chiffres de nb
 * Une fois la recursion terminee elle ecrit nb en convertissant ce
 * chiffre en caractere
 *
 *****************************************************************************/
void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = (unsigned int)(n * -1);
	}
	else
		nb = (unsigned int)n;
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd((char)(nb % 10 + 48), fd);
}
