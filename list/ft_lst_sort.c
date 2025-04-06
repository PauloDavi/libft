/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 10:32:11 by cobli             #+#    #+#             */
/*   Updated: 2025/04/06 19:57:26 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static void split_list(t_list *source, t_list **front, t_list **back);
static t_list *merge_sorted(t_list *a, t_list *b, int (*cmp)(void *, void *));

void ft_lst_sort(t_list **lst, int (*cmp)(void *, void *)) {
  if (!lst || !*lst || !(*lst)->next)
    return;

  t_list *head = *lst;
  t_list *a, *b;

  split_list(head, &a, &b);

  ft_lst_sort(&a, cmp);
  ft_lst_sort(&b, cmp);

  *lst = merge_sorted(a, b, cmp);
}

static void split_list(t_list *source, t_list **front, t_list **back) {
  t_list *slow = source;
  t_list *fast = source->next;

  while (fast != NULL) {
    fast = fast->next;
    if (fast != NULL) {
      slow = slow->next;
      fast = fast->next;
    }
  }

  *front = source;
  *back = slow->next;
  slow->next = NULL;
}

static t_list *merge_sorted(t_list *a, t_list *b, int (*cmp)(void *, void *)) {
  if (!a) return b;
  if (!b) return a;

  t_list *result = NULL;

  if (cmp(a->content, b->content) <= 0) {
    result = a;
    result->next = merge_sorted(a->next, b, cmp);
  } else {
    result = b;
    result->next = merge_sorted(a, b->next, cmp);
  }

  return result;
}
