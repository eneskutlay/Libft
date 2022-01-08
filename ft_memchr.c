/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:11:50 by ekutlay           #+#    #+#             */
/*   Updated: 2022/01/08 19:31:12 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	character;

	str = (unsigned char *)str;
	character = (unsigned char *)c;
	i = 0;
	while (i < n)
	{
		if (*s == character)
		{
			return (s);
		}
		s++;
		i++;
	}
	return (NULL);
}
