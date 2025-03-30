/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:06:33 by pdavi-al          #+#    #+#             */
/*   Updated: 2025/03/30 16:59:47 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *src) {
  size_t src_len;
  char *dest;

  src_len = ft_strlen(src);
  dest = malloc((src_len + 1) * sizeof(char));
  if (dest == NULL)
    return (dest);
  ft_strlcpy(dest, src, src_len + 1);
  return (dest);
}
