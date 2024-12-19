/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:47:23 by macovach          #+#    #+#             */
/*   Updated: 2024/04/10 13:47:24 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main() {
//	 int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//	 if (fd == -1) {
//		 // Handle error
//		 return 1;
//	 }
//
//	 ft_putchar_fd('A', fd); // Writes 'A' to "output.txt"
//
//	 close(fd);
//	 return 0;
// }
