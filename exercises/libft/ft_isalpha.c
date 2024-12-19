/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:45:52 by macovach          #+#    #+#             */
/*   Updated: 2024/04/10 13:45:53 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// int main(void)
// {
//   char c = 'a';
//   printf("%c is alpha %i\n",c , ft_isalpha(c));
//
//   c = '4';
//   printf("%c is alpha %i\n",c , ft_isalpha(c));
//
//   c = 'A';
//   printf("%c is alpha %i\n",c , ft_isalpha(c));
//   return 0;
// }
//
