/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:47:13 by macovach          #+#    #+#             */
/*   Updated: 2024/04/10 13:47:14 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_buffer;
	unsigned char	*s2_buffer;

	if (n == 0)
		return (0);
	i = 0;
	s1_buffer = (unsigned char *)s1;
	s2_buffer = (unsigned char *)s2;
	while (s1_buffer[i] == s2_buffer[i] && i < n - 1)
		i++;
	return ((unsigned char)s1_buffer[i] - (unsigned char)s2_buffer[i]);
}

// int main(void)
// {
// 	char *s1 = "zyxbcdefgh";
// 	char *s2 = "abcdefgxyz";
// 	int i = 0;
// 	printf("ft_memcmp(%s,%s,%i): %i\n",s1, s2, i, ft_memcmp(s1, s2, i));
// 	printf("memcmp(%s,%s,%i): %i\n",s1, s2, i, memcmp(s1, s2, i));
// 	return EXIT_SUCCESS;
// }
