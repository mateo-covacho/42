/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:45:20 by macovach          #+#    #+#             */
/*   Updated: 2024/04/10 13:45:32 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str_new;

	str_new = s;
	i = 0;
	while (i < n)
	{
		str_new[i] = '\0';
		i++;
	}
}

// int main(void)
//{
//   int* f = malloc(sizeof(int[9]));
//
//   ft_bzero(f, 3);
//
//   if (f[1] == '\0') {
//	printf("bzero f[0] == '\\0 ft_bzero is correct!'\n");;
//   }
//
//   return 0;
// }
