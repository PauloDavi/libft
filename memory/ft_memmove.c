/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:06:24 by pdavi-al          #+#    #+#             */
/*   Updated: 2025/03/30 17:00:43 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n) {
  char *dest_ptr;
  const char *src_ptr;

  dest_ptr = (char *)dest;
  src_ptr = (const char *)src;
  if (dest_ptr == src_ptr)
    return (dest);
  if (src_ptr < dest_ptr && dest_ptr < src_ptr + (sizeof(char) * n)) {
    src_ptr += (sizeof(char) * n);
    dest_ptr += (sizeof(char) * n);
    while (n--)
      *--dest_ptr = *--src_ptr;
  } else
    while (n--)
      *dest_ptr++ = *src_ptr++;
  return (dest);
}
