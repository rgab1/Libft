/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grivault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 22:03:01 by grivault          #+#    #+#             */
/*   Updated: 2025/11/13 04:09:10 by grivault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	siz_dst;
	size_t	siz_src;
	size_t	i;

	i = 0;
	siz_dst = ft_strlen(dst);
	siz_src = ft_strlen(src);
	if (siz_dst < siz)
		siz = siz_dst;
	while (i < siz)
	{
		dst[i] = src[i];
		i++;
	}
	return (siz + siz_src);
}
