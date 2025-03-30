/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:06:20 by pdavi-al          #+#    #+#             */
/*   Updated: 2025/03/30 17:00:44 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n) {
  char *ptr_dest;
  const char *ptr_src;

  ptr_dest = (char *)dest;
  ptr_src = (char *)src;
  while (n--)
    *ptr_dest++ = *ptr_src++;
  return ((void *)dest);
}
