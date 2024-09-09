


#include "../includes/libft.h"

/******************************************************************************
 *
 * Prend un pointeur sur un element d'une liste chainee en entree et renvoie
 * Parcourt la liste en utilisant un pointeur lst, en incrementant size et
 * en passant a l'element suivant jusqu'a ce que lst soit nul
 * Renvoie la valeur de size qui represente le nombre d'elements de la liste
 *
 *****************************************************************************/
int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
