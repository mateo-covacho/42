/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:47:56 by macovach          #+#    #+#             */
/*   Updated: 2024/04/10 14:23:39 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*final_str;
	unsigned int	i;
	int				len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	final_str = malloc((len + 1) * sizeof(char));
	if (!final_str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		final_str[i] = f(i, s[i]);
		i++;
	}
	final_str[i] = '\0';
	return (final_str);
}

// char fun(unsigned int i, char c) { return (char)(i + c); }
//
// int main(void) {
//   printf("S : %s", ft_strmapi("abcd0 ", fun));
//   return EXIT_SUCCESS;
// }
