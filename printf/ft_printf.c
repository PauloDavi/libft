/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 19:37:02 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/07/23 17:53:42 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf_utils.h"

static int	va_printf(const char *format, va_list ap);
static int	print_var(t_element element, va_list ap);
static void	get_element(const char **format, t_element *element, va_list ap);

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;

	len = 0;
	if (format == NULL)
		return (0);
	va_start(ap, format);
	len = va_printf(format, ap);
	va_end(ap);
	return (len);
}

static int	va_printf(const char *format, va_list ap)
{
	int			len;
	t_element	element;

	len = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			element.flags = 0;
			element.width = 0;
			element.precision = -1;
			get_element(&format, &element, ap);
			len += print_var(element, ap);
		}
		else
		{
			write(1, format++, 1);
			len += 1;
		}
	}
	return (len);
}

static int	print_var(t_element element, va_list ap)
{
	int	len;

	len = 0;
	if (element.type == 'i' || element.type == 'd')
		len = ft_printf_putnbr(va_arg(ap, int), element);
	else if (element.type == 's')
		len = ft_printf_putstr(va_arg(ap, char *), element);
	else if (element.type == 'x')
		len = ft_printf_putnbr_b(va_arg(ap, unsigned int), HEX_L_BASE, element);
	else if (element.type == 'X')
		len = ft_printf_putnbr_b(va_arg(ap, unsigned int), HEX_U_BASE, element);
	else if (element.type == 'o')
		len = ft_printf_putnbr_b(va_arg(ap, unsigned int), OCTAL_BASE, element);
	else if (element.type == 'u')
		len = ft_printf_putnbr_b(va_arg(ap, unsigned int), DEC_BASE, element);
	else if (element.type == 'p')
		len = ft_printf_putpointer(va_arg(ap, void *), element);
	else if (element.type == 'c')
		len = ft_printf_putchar((unsigned char)va_arg(ap, int), element);
	else if (element.type == '%')
	{
		write(1, &element.type, 1);
		len++;
	}
	return (len);
}

static void	get_element(const char **format, t_element *element, va_list ap)
{
	while (!ft_printf_istype(**format))
	{
		if (ft_printf_isflag(**format))
			element->flags |= ft_printf_get_flag(*(*format)++);
		else if (ft_isdigit(**format))
			element->width = ft_printf_atoi(format);
		else if (**format == '*')
		{
			(*format)++;
			element->width = va_arg(ap, int);
		}
		else if (*(*format)++ == '.')
		{
			if (**format == '*')
			{
				(*format)++;
				element->precision = va_arg(ap, int);
			}
			else
				element->precision = ft_printf_atoi(format);
		}
	}
	element->type = *(*format)++;
}
