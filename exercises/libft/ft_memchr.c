/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:47:10 by macovach          #+#    #+#             */
/*   Updated: 2024/04/10 13:47:11 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buff;
	unsigned char	char_to_find;

	char_to_find = (unsigned char)c;
	buff = (unsigned char *)s;
	while (n)
	{
		if (*buff == char_to_find)
		{
			return (buff);
		}
		buff++;
		n--;
	}
	return (NULL);
}

// int main() {
//	char str[] = "Hello, World!";
//	char to_find = 'W';
//
//
//	printf("Character '%c' found at position: %s\n",to_find, (char
//*)ft_memchr(str, to_find, ft_strlen(str)));
//
//	return 0;
// }