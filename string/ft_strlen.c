/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:02:11 by pdavi-al          #+#    #+#             */
/*   Updated: 2025/03/30 16:59:55 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str) {
  size_t i;

  if (str == NULL)
    return (0);
  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
