/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:53:06 by pdavi-al          #+#    #+#             */
/*   Updated: 2025/03/30 17:01:16 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) {
  t_list *new;
  t_list *first;

  if (lst == NULL || f == NULL || del == NULL)
    return (NULL);
  new = ft_lstnew(f(lst->content));
  if (new == NULL)
    return (NULL);
  first = new;
  lst = lst->next;
  while (lst != NULL) {
    new->next = ft_lstnew(f(lst->content));
    if (new->next == NULL) {
      del(new->content);
      return (NULL);
    }
    new = new->next;
    lst = lst->next;
  }
  return (first);
}
