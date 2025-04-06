/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:53:12 by pdavi-al          #+#    #+#             */
/*   Updated: 2025/04/06 12:02:05 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lst_reverse(t_list **lst) {
  t_list *prev = NULL;
  t_list *current = *lst;

  while (current != NULL) {
    t_list *next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }

  *lst = prev;
}
