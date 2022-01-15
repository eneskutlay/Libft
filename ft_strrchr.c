/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:27:50 by ekutlay           #+#    #+#             */
/*   Updated: 2022/01/15 20:08:28 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int		i;
	char	*rstr;

	i = 0;
	while (string[i])
	{
		i++;
	}
	rstr = (char *)string;
	while (i >= 0)
	{
		if (rstr[i] == (unsigned char)c)
		{
			return (&rstr[i]);
		}
		i--;
	}
	return (0);
}
