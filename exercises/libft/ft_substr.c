/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:48:09 by macovach          #+#    #+#             */
/*   Updated: 2024/04/10 13:48:10 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*return_str;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (len > s_len - start)
	{
		len = s_len - start;
	}
	if (start >= s_len)
	{
		return_str = malloc(1);
		if (!return_str)
			return (NULL);
		return_str[0] = '\0';
		return (return_str);
	}
	return_str = malloc(len + 1);
	if (!return_str)
		return (NULL);
	ft_strlcpy(return_str, s + start, len + 1);
	return_str[len] = '\0';
	return (return_str);
}

// int main()
// {
// 	printf("ft_substr(\"mateo, hello!\",1,3) string : \"%s\"", ft_substr("mateo,
// hello!",1,3)); 	return (0);
// }