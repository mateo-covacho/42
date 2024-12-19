/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:47:18 by macovach          #+#    #+#             */
/*   Updated: 2024/04/10 14:49:12 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_buf;
	char	*src_buf;

	if ((dest == NULL && src == NULL) && n)
		return (NULL);
	dest_buf = (char *)dest;
	src_buf = (char *)src;
	if (dest_buf < src_buf)
	{
		while (n--)
			*dest_buf++ = *src_buf++;
	}
	else
	{
		dest_buf += n - 1;
		src_buf += n - 1;
		while (n--)
		{
			*dest_buf = *src_buf;
			dest_buf--;
			src_buf--;
		}
	}
	return (dest);
}

// int main() {
// 	char str[] = "Hello_world!";

// 	printf("Before memmove(dest = str + 2, src = str, 5) : %s\n", str);
// 	memmove(str + 2, str, 5);

// 	printf("After memmove: %s\n\n", str);

// 	//second case
// 	char str2[] = "Hello_world!";

// 	printf("Before memmove(dest = str2 , src = str2 + 5, 5) : %s\n", str2);
// 	memmove(str2 , str2 + 2, 5);

// 	printf("After memmove: %s\n\n", str2);

//	 return 0;
// }
