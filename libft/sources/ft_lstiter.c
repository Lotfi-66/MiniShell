


#include "../includes/libft.h"

/******************************************************************************
 *
 * Permet d'appliquer une operation a chaque element de la liste en
 * parcourant tous les elements de la liste lst et en executant la fonction f
 * sur le contenu de chaque element
 * Une boucle while parcourt la liste jusqu'a ce que l'element suivant
 * soit NULL. f est appele a chaque iteration avec le contenu de l'element
 * courant.
 * Enfin l'element courant est ;is a jour pour etre l'element suivant
 * dans la liste. La boucle s'arrete quand element suivant = NULL
 *
 *****************************************************************************/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
