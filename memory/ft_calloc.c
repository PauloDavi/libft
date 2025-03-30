/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:05:44 by pdavi-al          #+#    #+#             */
/*   Updated: 2025/03/30 17:00:48 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size) {
  void *arr;

  if ((nmemb * size != 0) && ((nmemb * size) / size != nmemb))
    return (NULL);
  arr = malloc(nmemb * size);
  if (arr == NULL)
    return (NULL);
  ft_bzero(arr, nmemb * size);
  return (arr);
}
