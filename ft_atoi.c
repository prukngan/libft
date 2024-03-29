/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prukngan <phongsathon.rak2003@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 22:02:11 by prukngan          #+#    #+#             */
/*   Updated: 2023/11/07 16:08:13 by prukngan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int arg)
{
	if (arg >= '0' && arg <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *c)
{
	long int	res;
	int			neg;

	res = 0;
	neg = 1;
	while (((*c >= 9 && *c <= 13) || *c == ' ')
		|| (*c == '+' && ft_isdigit(*(c + 1))))
		c++;
	if (*c == '-')
	{
		neg = -1;
		c++;
	}
	while (*c >= '0' && *c <= '9')
		res = (*c++ - 48) + (res * 10);
	return (neg * res);
}
