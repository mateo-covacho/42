/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:47:47 by macovach          #+#    #+#             */
/*   Updated: 2024/04/10 14:23:53 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*return_str;
	size_t	i;
	size_t	j;

	return_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	j = 0;
	if (!return_str)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		return_str[i] = s1[i];
		i++;
	}
	while (i < ft_strlen(s1) + ft_strlen(s2))
	{
		return_str[i] = s2[j];
		i++;
		j++;
	}
	return_str[i] = '\0';
	return (return_str);
}
// int main()
// {
// 	printf("concatenated :%s", ft_strjoin("mateo", " covacho"));
// }