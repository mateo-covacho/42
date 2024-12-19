/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:46:53 by macovach          #+#    #+#             */
/*   Updated: 2024/04/10 13:46:54 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
	free(*lst);
	*lst = NULL;
}
/*Nombre de fun-
ción
ft_lstclear
Prototipo void ft_lstclear(t_list **lst, void (*del)(void
*));
Archivos a entre-
gar
-
Parámetros lst: la dirección de un puntero a un nodo.
del: un puntero a función utilizado para eliminar
el contenido de un nodo.
Valor devuelto Nada
Funciones autor-
izadas
free
Descripción Elimina y libera el nodo ’lst’ dado y todos los
consecutivos de ese nodo, utilizando la función
’del’ y free(3).
Al final, el puntero a la lista debe ser NULL
*/

// int main() {
//	 t_list *head = NULL;
//	 t_list *newNode6 = ft_lstnew("lib_ft");
//	 ft_lstadd_front(&head, newNode6);

//	 t_list *newNode5 = ft_lstnew("el");
//	 ft_lstadd_front(&head, newNode5);

//	 t_list *newNode4 = ft_lstnew("tal");
//	 ft_lstadd_front(&head, newNode4);

//	 t_list *newNode3 = ft_lstnew("que");
//	 ft_lstadd_front(&head, newNode3);

//	 t_list *newNode2 = ft_lstnew("mateo");
//	 ft_lstadd_front(&head, newNode2);

//	 t_list *newNode1 = ft_lstnew("Hola");
//	 ft_lstadd_front(&head, newNode1);

// 	//ft_lstclear()
//	 t_list *size = ft_lstlast(head);
//	 printf("\nThe last node content is: %s\n", (char *) size->content);
// }
