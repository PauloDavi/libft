/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_to_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:26:19 by cobli             #+#    #+#             */
/*   Updated: 2023/10/02 22:33:41 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_lst_to_array(t_list *lst)
{
	size_t	size;
	void	**array;

	size = ft_lstsize(lst);
	array = ft_calloc(size + 1, sizeof(void *));
	size = 0;
	while (lst != NULL)
	{
		array[size] = lst->content;
		size++;
		lst = lst->next;
	}
	return (array);
}
