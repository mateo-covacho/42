/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:47:08 by macovach          #+#    #+#             */
/*   Updated: 2024/04/10 14:25:33 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	curr;
	size_t	i;

	if (!lst)
		return (0);
	curr = *lst;
	i = 0;
	while (curr.next)
	{
		curr = *curr.next;
		i++;
	}
	i++;
	if (i == 0)
		return (0);
	return (i);
}

// int main() {
//	 t_list *head = NULL; // Start with an empty list

//	 // Create new nodes and add them to the front of the list
//	 t_list *newNode1 = ft_lstnew("Hola");
//	 ft_lstadd_front(&head, newNode1);

//	 t_list *newNode2 = ft_lstnew("mateo");
//	 ft_lstadd_front(&head, newNode2);

//	 t_list *newNode3 = ft_lstnew("que");
//	 ft_lstadd_front(&head, newNode3);

//	 t_list *newNode4 = ft_lstnew("tal");
//	 ft_lstadd_front(&head, newNode4);

//	 t_list *newNode5 = ft_lstnew("el");
//	 ft_lstadd_front(&head, newNode5);

//	 t_list *newNode6 = ft_lstnew("lib_ft");
//	 ft_lstadd_front(&head, newNode6);

//	 // Now, let's use ft_lstsize to count the elements in the list
//	 int size = ft_lstsize(head);
//	 printf("\nThe list size is: %d\n", size);

//	 // Free the allocated nodes
//	 // Note: In a real scenario, you would also free the content if it was
//dynamically allocated 	 while (head != NULL) {
//t_list *temp = head; 		 head =
//head->next; 		 free(temp);
//	 }
// }