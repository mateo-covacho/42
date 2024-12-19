/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:47:39 by macovach          #+#    #+#             */
/*   Updated: 2024/04/10 13:47:40 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*buff;
	unsigned char	char_to_find;

	char_to_find = (unsigned char)c;
	buff = (unsigned char *)s;
	while (*buff)
	{
		if (*buff == char_to_find)
			return ((char *)buff);
		buff++;
	}
	if (*buff == char_to_find)
		return ((char *)buff);
	return (NULL);
}
