/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:47:20 by macovach          #+#    #+#             */
/*   Updated: 2024/04/10 13:47:21 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str2;

	str2 = (char *)b;
	while (len > 0)
	{
		*str2 = c;
		str2++;
		len--;
	}
	return (b);
}

// int main()
// {
//   char str1[20];
//
//   ft_memset(str1,'z', 5);
//   printf("ft_memset first z replaced with 'z' : %s\n",str1);
// }