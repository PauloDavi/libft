/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:32:32 by pdavi-al          #+#    #+#             */
/*   Updated: 2025/03/30 16:59:56 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
  unsigned int i;
  size_t s_len;
  char *str;

  s_len = ft_strlen(s);
  str = malloc(sizeof(char) * (s_len + 1));
  if (str == NULL)
    return (NULL);
  i = 0;
  while (s[i] != '\0') {
    str[i] = f(i, s[i]);
    i++;
  }
  str[i] = '\0';
  return (str);
}
