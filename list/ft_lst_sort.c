/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 10:32:11 by cobli             #+#    #+#             */
/*   Updated: 2025/03/30 15:42:49 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lst_sort(t_list *lst, int (*cmp)(void *, void *)) {
  if (!lst || !cmp)
    return;

  t_list *current;
  t_list *index;
  size_t list_size = ft_lstsize(lst);
  size_t i;
  size_t j;
  bool swapped;
  void *temp;

  for (i = 0; i < list_size - 1; i++) {
    swapped = false;
    current = lst;
    index = lst->next;

    for (j = 0; j < list_size - i - 1; j++) {
      if (index && cmp(current->content, index->content) > 0) {
        temp = current->content;
        current->content = index->content;
        index->content = temp;
        swapped = true;
      }
      current = current->next;
      if (index)
        index = index->next;
    }

    if (!swapped)
      break;
  }
}
