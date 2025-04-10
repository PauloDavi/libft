/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:03:19 by pdavi-al          #+#    #+#             */
/*   Updated: 2025/03/30 16:59:53 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size) {
  size_t i;

  if (dest == NULL || src == NULL)
    return (0);
  if (size == 0)
    return (ft_strlen(src));
  i = 0;
  while (src[i] != '\0' && i < (size - 1)) {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return (ft_strlen(src));
}
