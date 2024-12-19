/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:46:03 by macovach          #+#    #+#             */
/*   Updated: 2024/04/10 20:28:16 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int main(void)
// {
//   printf("char 50 is printalbe %d\n", ft_isprint(50));
//   printf("char 4 is printable %d\n", ft_isprint(4));
//   return 0;
// }
