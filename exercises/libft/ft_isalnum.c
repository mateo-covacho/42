/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:45:48 by macovach          #+#    #+#             */
/*   Updated: 2024/04/10 13:45:49 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}

// int main(void)
// {
//
//   printf("%d\n",ft_isalnum('0'));
//   printf("%d\n",ft_isalnum('9'));
//   printf("%d\n",ft_isalnum('d'));
//   printf("%d\n",ft_isalnum('+'));
//   return 0;
// }
