/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:21:38 by ekutlay           #+#    #+#             */
/*   Updated: 2022/01/21 20:37:23 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_array(char *s, unsigned int nbr, long int len)
{
	while (nbr > 0)
	{
		s[len--] = 48 + (nbr % 10);
		nbr = nbr / 10;
	}
	return (s);
}

static long int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*s;
	long int		len;
	unsigned int	nbr;
	int				sign;

	sign = 1;
	len = ft_len(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len--] = '\0';
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		nbr = n * -1;
		s[0] = '-';
	}
	else
		nbr = n;
	s = ft_array(s, nbr, len);
	return (s);
}
