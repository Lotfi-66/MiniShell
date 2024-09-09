


#include "../includes/libft.h"

/******************************************************************************

 * Alloue de la memoire pour un nouveau maillon de liste chainee et
 * initialise ses champs avec les valeurs passees en arg
 * L'arg content est un pointeur vers un objet qui sera stocke dans
 * le nouveau maillon
 * Si l'allocation memoire reussit, initialise les champs du nouveau maillon
 * Content avec valeur content -> pointeur vers le contenu a stocker
 * next = NULL -> maillon ne pointe vers aucun autre mailon
 * Retourne  un pointeur vers le nouveau maillon ou NULL si echec
 *
 *****************************************************************************/
t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}
