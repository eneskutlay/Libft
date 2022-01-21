/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 22:25:01 by ekutlay           #+#    #+#             */
/*   Updated: 2022/01/21 22:32:21 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*temp;
	int		i;
	int		len;

	if (!s || !*s || !f)
	{
		return (NULL);
	}
	len = ft_strlen(s);
	i = 0;
	temp = malloc(sizeof(char) * (len + 1));
	if (!temp)
	{
		return (NULL);
	}
	while (i < len)
	{
		temp[i] = f(i, s[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
