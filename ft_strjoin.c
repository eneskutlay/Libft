/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 20:00:14 by ekutlay           #+#    #+#             */
/*   Updated: 2022/01/20 20:16:11 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*joins;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joins = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!s1 || !s2 || !joins)
	{
		return (NULL);
	}
	ft_strlcpy(joins, s1, s1_len + 1);
	ft_strlcat(joins + (s1_len), s2, s2_len + 1);
	return (joins);
}
