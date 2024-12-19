/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:45:55 by macovach          #+#    #+#             */
/*   Updated: 2024/04/10 20:28:06 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int main() {
//	 char c = 'A'; 
//
//	 if (ft_isascii(c)) {
//		 printf("'%c' is an ASCII character.\n", c);
//	 } else {
//		 printf("'%c' is not an ASCII character.\n", c);
//	 }
//
//	 return 0;
// }
