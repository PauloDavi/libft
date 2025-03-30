/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:06:12 by pdavi-al          #+#    #+#             */
/*   Updated: 2025/03/30 17:00:46 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n) {
  const unsigned char *ptr;

  ptr = (unsigned char *)s;
  while (n--) {
    if (*ptr == (unsigned char)c)
      return ((void *)ptr);
    ptr++;
  }
  return (NULL);
}
