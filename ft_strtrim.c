/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 20:24:15 by ekutlay           #+#    #+#             */
/*   Updated: 2022/01/20 20:47:35 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	end;
	char	*strim;

	strim = 0;
	first = 0;
	end = ft_strlen(s1);
	if (s1 != 0 || set != 0)
	{
		while (s1[first] && ft_strchr(set, s1[first]))
		{
			first++;
		}
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > first)
		{
			end--;
		}
		strim = (char *)malloc(sizeof(char) * (end - first + 1));
		if (strim)
		{
			ft_strlcpy(strim, &s1[first], end - first + 1);
		}
	}
	return (strim);
}
