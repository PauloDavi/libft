/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_atoi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:43:29 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/07/20 22:14:57 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf_utils.h"

int	ft_printf_atoi(const char **nptr)
{
	int	number;

	number = 0;
	while (ft_isdigit(**nptr))
		number = (number * 10) + (*(*nptr)++ - '0');
	return (number);
}
