/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:17:52 by ekutlay           #+#    #+#             */
/*   Updated: 2022/01/20 21:11:49 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	d;
	char	*subs;

	i = 0;
	d = 0;
	subs = (char *)malloc(sizeof(char) * (len + 1));
	if (!s || !subs)
	{
		return (NULL);
	}
	while (s[i])
	{
		if (i >= start && d < len)
		{
			subs[d] = s[i];
			d++;
		}
		i++;
	}
	subs[d] = 0;
	return (subs);
}
