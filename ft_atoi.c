/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:12:34 by ekutlay           #+#    #+#             */
/*   Updated: 2022/01/12 18:19:25 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		flag;
	int		nb;

	i = 0;
	flag = 1;
	nb = 0;
	if (str)
	{		
		while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
			i++;
		if (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				flag *= -1;
			i++;
		}
		while (str[i] && str[i] >= '0' && str[i] <= '9')
		{
			nb = (nb * 10) + (str[i] - '0');
			i++;
		}
	}
	return (flag * nb);
}
