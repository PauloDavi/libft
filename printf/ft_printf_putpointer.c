/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putpointer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 22:12:14 by pdavi-al          #+#    #+#             */
/*   Updated: 2025/03/30 17:00:11 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_utils.h"

int ft_printf_putpointer(const void *ptr, t_element element) {
  if (ptr == NULL) {
    element.precision = -1;
    return (ft_printf_putstr("(nil)", element));
  }
  element.flags |= HASH_FLAG_MASK;
  return (ft_printf_putnbr_b((unsigned long)ptr, HEX_L_BASE, element));
}
