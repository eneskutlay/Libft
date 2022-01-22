/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 22:25:01 by ekutlay           #+#    #+#             */
/*   Updated: 2022/01/22 03:57:31 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	i;

	if (!s || !f)
	{
		return ((void *)0);
	}
	ret = ft_strdup(s);
	if (!ret)
	{
		return ((void *)0);
	}
	i = 0;
	while (ret[i])
	{
		ret[i] = f(i, ret[i]);
		i++;
	}
	return (ret);
}
