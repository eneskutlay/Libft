/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:35:42 by ekutlay           #+#    #+#             */
/*   Updated: 2022/01/06 11:46:33 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	int		len;

	i = 0;
	if (size < ft_strlen(dest))
		return (size + ft_strlen(src));
	else
	{
		while (dest[i])
			i++;
		ft_strlcpy(&dest[i], src, size - i);
		len = ft_strlen(src) + i;
		return (len);
	}
}
