/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:06:30 by pdavi-al          #+#    #+#             */
/*   Updated: 2025/03/30 16:59:44 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c) {
  if (s == NULL)
    return (NULL);
  while (*s != '\0') {
    if ((unsigned char)*s == (unsigned char)c)
      return ((char *)s);
    s++;
  }
  if ((char)c == '\0')
    return ((char *)s);
  return (NULL);
}
