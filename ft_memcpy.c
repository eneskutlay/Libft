/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:32:02 by ekutlay           #+#    #+#             */
/*   Updated: 2022/01/11 17:14:01 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == (void *)0 && src == (void *)0)
	{
		return (dst);
	}
	i = 0;
	while (i < n)
	{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i++;
	}
	return (dst);
}
