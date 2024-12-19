/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:48:05 by macovach          #+#    #+#             */
/*   Updated: 2024/04/10 13:48:06 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*result;
	long		i;

	result = NULL;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			result = &s[i];
			break ;
		}
		i--;
	}
	return ((char *)result);
}
//  fallo la linea 13 ultima vez puse c + '0'

// int main()
// {
// 	 const char *s2 = "abbbbbbbb";
// 	 char c = 'a';

// 	 printf("ft_strrchr should be ft_strrchr(%s, %c) %s\n",s2, c,ft_strrchr(s2,
// )); 	 printf("ft_strrchr should be strrchr(%s, %c) %s\n",s2, c,strrchr(s2,
// ));
// }
