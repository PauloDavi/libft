/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_revert_iter.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:53:12 by pdavi-al          #+#    #+#             */
/*   Updated: 2025/03/30 17:01:29 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lst_revert(t_list *lst) {
  if (!lst || !lst->next) return;

  t_list *front = lst;
  t_list *back = ft_lstlast(lst);
  size_t size = ft_lstsize(lst);

  for (size_t i = 0; i < size / 2; i++) {
    ft_pswap(&front->content, &back->content);
    front = front->next;

    t_list *temp = lst;
    while (temp->next != back) {
      temp = temp->next;
    }
    back = temp;
  }
}
