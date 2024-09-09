


#include "../includes/libft.h"

/******************************************************************************
 *
 * Prend en entree une liste chainee lst
 * Renvoie un pointeur sur le dernier element de la liste
 * Une boucle while parcourt la liste jusqu'a NULL
 *
 *****************************************************************************/
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
