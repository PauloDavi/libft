/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:05:15 by pdavi-al          #+#    #+#             */
/*   Updated: 2025/03/30 17:00:00 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len) {
  size_t little_len;

  little_len = ft_strlen(little);
  if (little_len == 0)
    return ((char *)big);
  while (*big != '\0' && len >= little_len) {
    if (*big == *little && !ft_memcmp(big, little, little_len))
      return ((char *)big);
    big++;
    len--;
  }
  return (NULL);
}
