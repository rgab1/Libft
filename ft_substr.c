/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grivault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:33:24 by grivault          #+#    #+#             */
/*   Updated: 2025/11/18 19:07:18 by grivault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	s_len;
	size_t	actual_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start  >= s_len)
		return (ft_strdup(""));
	actual_len = s_len - start;
	if (actual_len > len)
		actual_len = len;
	sub_str = (char	*)malloc(sizeof(char) * (actual_len + 1));
	if (sub_str == NULL)
		return (NULL);
	ft_memmove(sub_str, s + start, actual_len);
	sub_str[actual_len] = '\0';
	return (sub_str);
}
/*
#include <stdio.h>

int main(void)
{
	char const *test1 = "Hello je suis le word";
	printf("%s \n", ft_substr(test1, 6, 5));
	return (0);
}
*/
