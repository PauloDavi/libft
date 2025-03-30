/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:53:24 by pdavi-al          #+#    #+#             */
/*   Updated: 2025/03/30 17:01:24 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new) {
  t_list *ptr;

  if (lst != NULL) {
    ptr = ft_lstlast(*lst);
    if (ptr != NULL)
      ptr->next = new;
    else
      *lst = new;
  }
}
