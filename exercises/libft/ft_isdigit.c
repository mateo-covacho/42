/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:45:57 by macovach          #+#    #+#             */
/*   Updated: 2024/04/10 13:45:58 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

// int main(void)
// {
//
//   printf("%d\n",ft_isdigit('0'));
//   printf("%d\n",ft_isdigit('9'));
//   printf("%d\n",ft_isdigit('d'));
//   return 0;
// }
