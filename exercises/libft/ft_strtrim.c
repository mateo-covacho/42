/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:48:07 by macovach          #+#    #+#             */
/*   Updated: 2024/04/12 23:07:53 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static size_t	ft_c_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (set[i] == c)
			return (1);
		else
			i++;
	}
	return (0);
}

static size_t	ft_count_fwd_set_chars(char const *str, char const *set)
{
	size_t	i;

	i = 0;
	while (1)
	{
		if (ft_c_in_set(str[i], set))
			i++;
		else
			break ;
	}
	return (i);
}

static size_t	ft_count_bck_set_chars(char const *str, char const *set)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(str) - 1;
	while (1)
	{
		if (ft_c_in_set(str[i], set))
		{
			i--;
			j++;
		}
		else
			break ;
	}
	i--;
	i--;
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	n_fwd_chars;
	size_t	s_len;
	size_t	n_back_chars;
	size_t	new_len;
	char	*str_return;

	n_fwd_chars = ft_count_fwd_set_chars(s1, set);
	s_len = ft_strlen(s1);
	n_back_chars = ft_count_bck_set_chars(s1, set);
	if (n_fwd_chars + n_back_chars >= s_len)
		new_len = 0;
	else
		new_len = s_len - n_fwd_chars - n_back_chars;
	str_return = malloc(new_len + 1);
	if (!s1 || !set)
		return (NULL);
	if (!str_return)
		return (NULL);
	if (new_len > 0)
	{
		ft_strlcpy(str_return, &s1[n_fwd_chars], new_len + 1);
	}
	else
		str_return[0] = '\0';
	return (str_return);
}
// char *ft_strtrim(char const *s1, char const *set)
// {
// 	char *str_return = malloc(ft_strlen(s1)
// 		- ft_count_fwd_set_chars(s1, set) - ft_count_bck_set_chars(s1, set));

// 	if (!str_return)
// 		return (NULL);
// 	ft_strlcpy(str_return, s1 + ft_count_fwd_set_chars(s1, set),ft_strlen(s1)
// 		- (ft_count_bck_set_chars(s1, set) + ft_count_fwd_set_chars(s1, set)));
// 	return (str_return);
// }
// int main() {
// 	char *s = "1234mateo123";
// 	char *set ="123456789";
// 	printf("ft_strtrim(\"%s\", \"%s\"): %s\n\n",s,set,ft_strtrim(s, set));

// 	s = "1234mateo1234";
// 	set ="1234mo";
// 	printf("ft_strtrim(\"%s\", \"%s\"): %s\n\n",s,set,ft_strtrim(s, set));

// 	s = "1234mateo123444";
// 	set ="124";
// 	printf("ft_strtrim(\"%s\", \"%s\"): %s\n\n",s,set,ft_strtrim(s, set));
// }