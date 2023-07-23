/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putchar.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 21:21:24 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/07/23 15:55:41 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_utils.h"

int	ft_printf_putchar(const char c, t_element element)
{
	int	spaces;

	spaces = element.width - 1;
	if (spaces > 0)
	{
		if (!(element.flags & MINUS_FLAG_MASK))
			ft_printf_print_spaces(spaces, ' ');
		else if (element.flags & ZERO_FLAG_MASK)
			ft_printf_print_spaces(spaces, '0');
		write(1, &c, 1);
		if (element.flags & MINUS_FLAG_MASK)
			ft_printf_print_spaces(spaces, ' ');
		return (element.width);
	}
	write(1, &c, 1);
	return (1);
}
