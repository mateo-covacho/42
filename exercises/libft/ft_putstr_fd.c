/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:47:33 by macovach          #+#    #+#             */
/*   Updated: 2024/04/10 13:47:34 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// int main() {
//	 int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//	 if (fd == -1) {
//		 return 1;
//	 }
//	 ft_putstr_fd("Hello, Mateo!", fd);
//	 close(fd);
//	 return 0;
// }
