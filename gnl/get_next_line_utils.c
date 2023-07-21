/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 03:32:47 by vscode            #+#    #+#             */
/*   Updated: 2023/07/20 22:01:54 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_utils.h"
#include "libft.h"

char	*ft_gnl_strjoin(char *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*str_join;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str_join = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (str_join == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		ft_strlcpy(str_join, s1, s1_len + 1);
		free(s1);
	}
	ft_strlcpy(str_join + s1_len, s2, s2_len + 1);
	return (str_join);
}
