/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grivault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:37:49 by grivault          #+#    #+#             */
/*   Updated: 2025/11/20 20:17:28 by grivault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_charcmp(const char c, const char *set)
{
	size_t	y;
	size_t	set_len;
	int		count;

	y = 0;
	count = 0;
	set_len = ft_strlen(set);
	while (y < ft_strlen(set))
	{
		if (c == set[y])
			count += 1;
		y++;
	}
	if (count >= 1)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			i;
	unsigned int	start;

	i = 0;
	while (s1[i])
	{
		if (!ft_charcmp(s1[i++], set))
			break;
	}
	if (i == (ft_strlen(s1)))
		return (ft_strdup(""));
	start = i;
	i = ft_strlen(s1);
	while (i > 0)
	{
		if (!ft_charcmp(s1[i--], set))
			break;
	}
	i -= (start - 2);
	return (ft_substr(s1, start, i));
}
