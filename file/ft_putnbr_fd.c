/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:31:13 by pdavi-al          #+#    #+#             */
/*   Updated: 2025/03/30 17:01:42 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd) {
  long nbr;

  nbr = n;
  if (nbr < 0) {
    nbr *= -1;
    ft_putchar_fd('-', fd);
  }
  if (nbr / 10 > 0)
    ft_putnbr_fd(nbr / 10, fd);
  ft_putchar_fd("0123456789"[nbr % 10], fd);
}
