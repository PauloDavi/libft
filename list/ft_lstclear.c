/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:53:18 by pdavi-al          #+#    #+#             */
/*   Updated: 2025/03/30 17:01:22 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *)) {
  t_list *tmp;

  if (del == NULL || lst == NULL || *lst == NULL)
    return;
  while (lst && *lst) {
    tmp = (*lst)->next;
    ft_lstdelone(*lst, del);
    *lst = tmp;
  }
}
