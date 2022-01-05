/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 02:03:45 by ekutlay           #+#    #+#             */
/*   Updated: 2022/01/06 02:03:47 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int		i;
	char	*rstr;

	i = 0;
	while (string[i])
		i++;
	rstr = (char *)string;
	while (i >= 0)
	{
		if (rstr[i] == (unsigned char)c)
			return (&rstr[i]);
		i--;
	}
	return (0);
}
