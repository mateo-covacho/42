/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:46:44 by macovach          #+#    #+#             */
/*   Updated: 2024/04/10 13:46:45 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
	}
}

// int main() {
	//	 t_list *head = NULL; // Start with an empty list

	//	 // Create new nodes and add them to the front of the list
	//	 t_list *newNode6 = ft_lstnew("lib_ft");
	//	 ft_lstadd_front(&head, newNode6);

	//	 t_list *newNode5 = ft_lstnew("el");
	//	 ft_lstadd_front(&head, newNode5);

	//	 t_list *newNode4 = ft_lstnew("tal");
	//	 ft_lstadd_front(&head, newNode4);

	//	 t_list *newNode3 = ft_lstnew("que");
	//	 ft_lstadd_front(&head, newNode3);

	//	 t_list *newNode2 = ft_lstnew("mateo");
	//	 ft_lstadd_back(&head, newNode2);

	//	 t_list *newNode1 = ft_lstnew("Hola");
	//	 ft_lstadd_front(&head, newNode1);

	//	 // Now, let's use ft_lstsize to count the elements in the list
	//	 t_list *size = ft_lstlast(head);
	//	 printf("\nThe last node content is: %s\n", (char *) size->content);
	// }