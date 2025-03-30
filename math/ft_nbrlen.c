/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 16:29:14 by cobli             #+#    #+#             */
/*   Updated: 2025/03/30 17:01:00 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_nbrlen(long num) {
  size_t count;

  if (num == 0)
    return (1);
  count = 0;
  if (num < 0) {
    num = -num;
    count++;
  }
  while (num != 0) {
    num /= 10;
    count++;
  }
  return (count);
}
