/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grivault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 02:30:43 by grivault          #+#    #+#             */
/*   Updated: 2025/11/13 04:01:43 by grivault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	size_alloc;

	size_alloc = 0;
	if (nmemb == 0 | size == 0 | (nmemb * size > SIZE_MAX))
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (size_alloc < (size * nmemb))
	{
		*((int *)ptr + size_alloc++) = 0;
	}
    return (ptr);
}
