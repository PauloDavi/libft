/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unbrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 16:29:14 by cobli             #+#    #+#             */
/*   Updated: 2025/03/30 17:00:58 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_unbrlen(unsigned long num) {
  size_t count;

  if (num == 0)
    return (1);
  count = 0;
  while (num != 0) {
    num /= 10;
    count++;
  }
  return (count);
}
