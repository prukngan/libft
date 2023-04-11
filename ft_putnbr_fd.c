/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prukngan <phongsathon.rak2003@gmail.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 04:40:22 by prukngan          #+#    #+#             */
/*   Updated: 2023/04/08 18:52:46 by prukngan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	buff;

	buff = n;
	if (n < 0)
	{
		buff = -n;
		ft_putchar_fd('-', fd);
	}
	if (buff > 9)
		ft_putnbr_fd(buff / 10, fd);
	ft_putchar_fd(buff % 10 + 48, fd);
}

// void    ft_putnbr_fd(int n, int fd)
// {
//     if (n > 9)
//         ft_putnbr_fd(n / 10, fd);
//     else if (n == -2147483648)
//     {
//         write(1, "-2147483648", 11);
//         return ;
//     }
//     else if (n < 0)
//     {
//         n *= -1;
//         ft_putchar_fd('-', fd);
//         ft_putnbr_fd(n, fd);
//         return ;
//     }
//     ft_putchar_fd(n % 10 + 48, fd);
// }
