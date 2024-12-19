/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:47:59 by macovach          #+#    #+#             */
/*   Updated: 2024/04/10 13:48:00 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	char *s1 = "igual a";
// 	char *s2 = "igual z";

// 	printf("result of ft_strncmp(\"%s\",\"%s\", 100) = %i\n",
// 	s1,
// 	s2,
// 	ft_strncmp(s1, s2,100));
// 	printf("result of strncmp(\"%s\",\"%s\", 100) = %i\n",
// 	s1,
// 	s2,
// 	strncmp(s1, s2,100));

// }