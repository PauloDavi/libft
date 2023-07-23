/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:06:30 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/07/20 23:38:21 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
  while (*s1 != '\0' || *s2 != '\0')
  {
    if (*s1 != *s2)
      return (*s1 - *s2);
    s1++;
    s2++;
  }
  return (0);
}
