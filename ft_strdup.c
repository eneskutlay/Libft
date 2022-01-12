/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:36:00 by ekutlay           #+#    #+#             */
/*   Updated: 2022/01/12 18:42:10 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		len;

	if (s)
	{
		len = ft_strlen(s);
		str = (char *)malloc(sizeof(char) * (len + 1));
		if (!str)
		{
			return (NULL);
		}
		ft_memcpy(str, s, len);
		*(str + len) = '\0';
		return (str);
	}
	return (NULL);
}
