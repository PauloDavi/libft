/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:05:19 by pdavi-al          #+#    #+#             */
/*   Updated: 2025/03/30 17:00:01 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c) {
  char *finded;

  finded = NULL;
  while (*s != '\0') {
    if (*s == (char)c)
      finded = (char *)s;
    s++;
  }
  if ((char)c == 0)
    finded = (char *)s;
  return (finded);
}
