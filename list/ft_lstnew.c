/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:53:02 by pdavi-al          #+#    #+#             */
/*   Updated: 2025/03/30 17:01:14 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content) {
  t_list *ptr;

  ptr = malloc(1 * sizeof(t_list));
  if (ptr == NULL)
    return (NULL);
  ptr->content = content;
  ptr->next = NULL;
  return (ptr);
}
