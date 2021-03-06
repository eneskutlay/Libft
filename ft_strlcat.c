/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:35:42 by ekutlay           #+#    #+#             */
/*   Updated: 2022/01/19 20:58:36 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ldst;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	ldst = dst_len;
	i = 0;
	if (size > 0 && dst_len < size - 1)
	{
		while (src[i] && dst_len < size - 1 - i)
		{
			dst[ldst] = src[i];
			i++;
			ldst++;
		}
		dst[ldst] = 0;
	}
	if (dst_len >= size)
	{
		return (size + src_len);
	}
	return (dst_len + src_len);
}
