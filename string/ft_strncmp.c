/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:05:11 by pdavi-al          #+#    #+#             */
/*   Updated: 2025/03/30 16:59:58 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n) {
  if (s1 == NULL || s2 == NULL)
    return (-1);
  while ((*s1 + *s2) != '\0' && n--) {
    if (*s1 != *s2)
      return ((int)((unsigned char)*s1 - (unsigned char)*s2));
    s1++;
    s2++;
  }
  return (0);
}
