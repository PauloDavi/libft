/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_printnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 21:21:24 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/07/23 15:55:35 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_utils.h"

int	ft_printf_printnbr(char *str_n, int len, t_element element)
{
	int	spaces;

	spaces = element.width - len;
	if (spaces > 0)
	{
		if (!(element.flags & MINUS_FLAG_MASK))
			ft_printf_print_spaces(spaces, ' ');
		while (*str_n != '\0')
			write(1, str_n++, 1);
		if (element.flags & MINUS_FLAG_MASK)
			ft_printf_print_spaces(spaces, ' ');
		return (element.width);
	}
	while (*str_n != '\0')
		write(1, str_n++, 1);
	return (len);
}
