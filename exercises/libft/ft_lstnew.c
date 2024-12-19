/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:47:05 by macovach          #+#    #+#             */
/*   Updated: 2024/04/10 13:47:06 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*final_list_struct;

	final_list_struct = malloc(sizeof(t_list));
	if (!final_list_struct)
		return (NULL);
	final_list_struct->content = content;
	final_list_struct->next = NULL;
	return (final_list_struct);
}

// int main() {
//   char *example_content = "Hello, world!";

//   t_list *node = ft_lstnew(example_content);

//   if (node != NULL) {
//	 printf("Node content: %s\n", (char *)node->content);
//   } else {
//	 printf("Failed to create a new node.\n");
//   }
//   return 0;
// }
