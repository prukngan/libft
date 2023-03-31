/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prukngan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:59:21 by prukngan          #+#    #+#             */
/*   Updated: 2023/03/04 18:25:31 by prukngan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	abs_plus(char *buff, int n)
{
	if (n < 0)
	{
		*buff = '-';
		n = -n;
	}
	return (n);
}

int	intlen(int n)
{
	size_t	len;

	len = 1;
	if (n < 0)
		len++;
	while (n /= 10)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*buff;
	char	*pt;
	size_t	len;

	len = intlen(n);
	buff = (char *)malloc(len + 1);
	if (!buff)
		return (NULL);
	pt = buff + len;
	n = abs_plus(buff, n);
	*pt = '\0';
	while (n)
	{
		pt--;
		*pt = n % 10 + 48;
		n /= 10;
	}
	return (buff);
}

// int main()
// {
//   char  *str = ft_itoa(100);

//   printf("str = %s\n", str);
// }