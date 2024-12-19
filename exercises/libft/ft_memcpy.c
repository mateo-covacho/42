/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:47:16 by macovach          #+#    #+#             */
/*   Updated: 2024/04/12 23:06:07 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

// Game plan
// copiar dst a dest_copy y devolver dest_copy
// ft_strlcpy()

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest_buf;
	char	*src_buf;

	if ((dest == NULL && src == NULL) && n)
		return (NULL);
	dest_buf = (char *)dest;
	src_buf = (char *)src;
	while (n > 0)
	{
		*dest_buf = *src_buf;
		dest_buf++;
		src_buf++;
		n--;
	}
	return (dest);
}

// int main() {
// //	char src[] =
// "Hello,World!";
// //	char dest[50];
// //	int n = 7;
// //	memcpy(dest, src,
// n);
// //
// //	dest[n] = '\0';
// //
// //	printf("memcpy(%i)
// src: %s\n",n, src);
// //	printf("memcpy(%i)
// dest: %s\n",n, dest);

// 	char str[] =
// "123456";
// 	// Intent: shift
// "bcd" to right by two positions, expecting "abbcde" memcpy(str + 3, str + 1,
// 3); 
// printf("%s\n", str); char str2[] = "123456";
//
// "bcd" to right by two positions, resulting in "abbcde" 	memmove(str2 + 3,
// str2
// + 1, 3); 

//	 return 0;
// }
