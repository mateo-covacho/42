/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:47:36 by macovach          #+#    #+#             */
/*   Updated: 2024/04/13 00:38:45 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//get CUNT (charecters, until, next, terminator char)
static size_t	ft_get_cunt(char const *s, int terminator_char)
{
	size_t	cunt;
	int		curr_index;

	curr_index = 0;
	cunt = 0;
	while (s[curr_index] != terminator_char && s[curr_index] != '\0')
	{
		curr_index++;
		cunt++;
	}
	return (cunt);
}

static int	ft_countwords(const char *s, int c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c && (s[1] == c || s[1] == '\0'))
			count++;
		s++;
	}
	return (count);
}

static void	ft_free_strings(char **dst)
{
	size_t	n;

	n = 0;
	while (dst[n])
		free(dst[n++]);
	free (dst);
}

static char	**splitter(char **dst, const char *s, char c)
{
	size_t	i;
	size_t	size_s;
	size_t	c_u_n_t;
	size_t	next_word;

	next_word = 0;
	i = 0;
	size_s = (size_t)ft_strlen(s);
	while (i < size_s)
	{
		c_u_n_t = ft_get_cunt(s + i, c);
		if (c_u_n_t > 0)
		{
			dst[next_word] = ft_substr(s, i, c_u_n_t);
			if (!dst[next_word++])
			{
				ft_free_strings(dst);
				return ((char **)0);
			}
		}
		i += c_u_n_t + 1;
	}
	dst[next_word] = 0;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;

	if (!s)
		return (NULL);
	dst = (char **)malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!dst)
		return (NULL);
	dst = splitter(dst, s, c);
	if (!dst)
		return (NULL);
	return (dst);
}

// void printStrings(char *strings[]) {
// 	 int i = 0;
// 	 while (strings[i] != NULL) {
// 		 printf("string at i(%i): \"%s\"\n",i ,strings[i]);
// 		 i++;
// 	 }
// }

// int main () {
// 	char *str = "hola mateo ; asdasdasd asdasd";
// 	char c = ' ';
// 	printf("cunt of occ_of_c_in_s(\"%s\", %c) = %li\n",str,c,
// occ_of_c_in_s("hola ma teo", ' ')); 	
//printf("cunt of get_cunt(\"%s\", 0, %c) =
// %li\n",str, c, get_cunt("hola mateo", 0, ' '));
// 	//printf("coutn word adrian (%s, %c)= %i\n",str, c, ft_countword(str, c));
// 	char **arr_return = ft_split(str, c);
// 	// while (arr_return[i] != '\0') {
// 	// 	printf("arr_return[%i]: %s\n",i,&arr_return[i]);
// 	// 	i++;
// 	// }
// 	printStrings(arr_return);
// }
