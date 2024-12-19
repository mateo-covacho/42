/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:47:02 by macovach          #+#    #+#             */
/*   Updated: 2024/04/13 01:28:34 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*temp_new_node;
	char	*content;

	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!temp_new_node)
		{
			free(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		temp_new_node = ft_lstnew(content);
		ft_lstadd_back(&new_list, temp_new_node);
		lst = lst->next;
	}
	return (new_list);
}
//
// void *double_content(void *content) {
	//   int *new_content = malloc(sizeof(int));
	//   *new_content = *(int *)content * 2;
	//   return new_content;
	// }
	//
	// void delete_content(void *content)
	// {
		// free(content);
	// }
	//
	// int main() {
	//   int nums[] = {1, 2, 3, 4, 5};
	//   t_list *lst = NULL;
	//   t_list *new_lst;
	//   t_list *temp;
	//
	//   // Creating the original list
	//   for (int i = 0; i < 5; i++) {
	//	 ft_lstadd_back(&lst, ft_lstnew(&nums[i]));
	//   }
	//
	//   // Applying ft_lstmap
	//   new_lst = ft_lstmap(lst, double_content, delete_content);
	//
	//   // Printing the new list
	//   temp = new_lst;
	//   while (temp) {
	//	 printf("%d ", *(int *)temp->content);
	//	 temp = temp->next;
	//   }
	//
	//   // Cleanup
	//   ft_lstclear(&new_lst, delete_content);
	//
	//   return 0;
	// }
