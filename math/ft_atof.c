/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 22:22:32 by pdavi-al          #+#    #+#             */
/*   Updated: 2025/03/30 17:01:01 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int skip_space_sign(char *str, int *is_neg);

float ft_atof(char *str) {
  int i;
  int is_neg;
  float nb;
  float div;

  nb = 0;
  div = 0.1;
  is_neg = 1;
  i = skip_space_sign(str, &is_neg);
  while (str[i] && ft_isdigit(str[i]) && str[i] != '.') {
    nb = (nb * 10.0) + (str[i] - '0');
    i++;
  }
  if (str[i] == '.')
    i++;
  while (str[i] && ft_isdigit(str[i])) {
    nb = nb + ((str[i] - '0') * div);
    div *= 0.1;
    i++;
  }
  if (str[i] && !ft_isdigit(str[i]))
    return (-42);
  return (nb * is_neg);
}

static int skip_space_sign(char *str, int *is_neg) {
  int i;

  i = 0;
  while (ft_isspace(str[i]))
    i++;
  if (str[i] == '+' || str[i] == '-') {
    if (str[i] == '-')
      *is_neg *= -1;
    i++;
  }
  return (i);
}
