/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macovach <macovach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:47:26 by macovach          #+#    #+#             */
/*   Updated: 2024/04/10 13:47:27 by macovach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;
	char	c;

	c = '\n';
	i = 0;
	while (i < ft_strlen(s))
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, &c, 1);
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