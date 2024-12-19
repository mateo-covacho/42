/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:46:06 by macovach          #+#    #+#             */
/*   Updated: 2024/04/10 20:32:52 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static size_t	len_num(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*final_str;
	size_t	i;

	i = len_num(n);
	final_str = ft_calloc(i + 1, sizeof(char));
	if (!final_str)
		return (NULL);
	if (n == -2147483648)
		ft_strlcpy(final_str, "-2147483648", ft_strlen("-2147483648") + 1);
	if (n == 0)
		final_str[0] = '0';
	if (n < 0 && n != -2147483648)
	{
		final_str[0] = '-';
		n *= -1;
	}
	final_str[i] = '\0';
	while (n != 0 && n != -2147483648)
	{
		i--;
		final_str[i] = (n % 10) + '0';
		n /= 10;
	}
	return (final_str);
}

// int main()
// {
//   int i = -643;
//   printf("len int %i: %li \n", i, len_int(i));
//   //printf("ft_len_num %i: %li \n", i, ft_len_num(i));
//   printf("str result ft_itoa(%i): \"%s\"\n", i,ft_itoa(i));
//   i = -21474837 -1;
//   printf("str result ft_itoa(%i): \"%s\"\n", i,ft_itoa(i));
//   i = -21474838;
//   printf("str result ft_itoa(%i): \"%s\"\n", i,ft_itoa(i));
// }
