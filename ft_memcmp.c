/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:30:35 by ekutlay           #+#    #+#             */
/*   Updated: 2022/01/11 18:36:38 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s1_new;
	char	*s2_new;

	i = 0;
	s1_new = (char *)s1;
	s2_new = (char *)s2;
	while ((i < n) && ((unsigned char)s1_new[i] == (unsigned char)s2_new[i]))
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	else
	{
		return ((unsigned char)s1_new[i] - (unsigned char)s2_new[i]);
	}
}
