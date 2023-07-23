/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putstr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 21:23:20 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/07/23 17:56:29 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf_utils.h"

static int	ft_putstr_space(const char *str, int len, int s, t_element element);

int	ft_printf_putstr(const char *str, t_element element)
{
	int			len;
	int			spaces;
	const char	*s;

	s = str;
	if (str == NULL)
	{
		if (element.precision != -1 && element.precision < 6)
			s = "";
		else
			s = "(null)";
	}
	len = ft_strlen(s);
	if (element.precision != -1 && element.precision < len)
		len = element.precision;
	spaces = element.width - len;
	if (spaces > 0)
		return (ft_putstr_space(s, len, spaces, element));
	spaces = len;
	while (spaces--)
		write(1, s++, 1);
	return (len);
}

static int	ft_putstr_space(const char *str, int len, int s, t_element element)
{
	if (!(element.flags & MINUS_FLAG_MASK))
		ft_printf_print_spaces(s, ' ');
	while (len--)
		write(1, str++, 1);
	if (element.flags & MINUS_FLAG_MASK)
		ft_printf_print_spaces(s, ' ');
	return (element.width);
}
