/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:06:17 by pdavi-al          #+#    #+#             */
/*   Updated: 2025/03/30 17:00:45 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n) {
  const unsigned char *ptr1;
  const unsigned char *ptr2;

  ptr1 = (const unsigned char *)s1;
  ptr2 = (const unsigned char *)s2;
  while (n--) {
    if (*ptr1 != *ptr2)
      return (*ptr1 - *ptr2);
    ptr1++;
    ptr2++;
  }
  return (0);
}
