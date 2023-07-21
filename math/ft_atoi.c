/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:05:36 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/07/20 21:29:05 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		number;
	int		multiplyer;

	i = 0;
	number = 0;
	multiplyer = 1;
	while (nptr[i] != '\0' && ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '\0')
		return (number);
	if (nptr[i] == '+' || nptr[i] == '-')
		if (nptr[i++] == '-')
			multiplyer *= -1;
	while (ft_isdigit(nptr[i]))
		number = (number * 10) + (nptr[i++] - '0');
	return (number * multiplyer);
}
