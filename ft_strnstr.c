/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:13:18 by ekutlay           #+#    #+#             */
/*   Updated: 2022/01/19 21:20:12 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*src;
	char	*find;
	size_t	size;

	src = (char *)haystack;
	find = (char *)needle;
	size = ft_strlen(find);
	if (size == 0)
	{
		return ((char *)src);
	}
	if (size > len)
	{
		return ((char *) NULL);
	}
	while (len-- >= size && *src)
	{
		if (ft_strncmp(src, find, size) == 0)
		{
			return ((char *)src);
		}
		src++;
	}
	return ((char *) NULL);
}
