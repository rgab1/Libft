/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grivault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:22:16 by grivault          #+#    #+#             */
/*   Updated: 2025/11/08 19:31:38 by grivault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (s[i] == '-' | s[i] == '+')
		i++;
	while ((s[i] != '\0') & ((s[i] >= 48) & (s[i] <= 57)))
		i++;
	return (i);
}


static	int	ft_sign(char c)
{
	if (c == '-')
		return (-1);
	else if (c == '+')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	unit;
	int	i;
	int	total;
	int	sign;

	sign = 1;
	unit = 1;
	total = 0;
	i = ft_strlen(nptr) - 1;
	if (i == -1)
		return (0);
	while (i > -1)
	{
		if (!((nptr[i] >= 48) & (nptr[i] <= 57)))
			sign = ft_sign(nptr[i--]);
		else
		{
			total += (unit * ((nptr[i--]) - 48));
			unit *= 10;
		}
	}
	return (total * sign);
}
