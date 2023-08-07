/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 22:51:47 by vscode            #+#    #+#             */
/*   Updated: 2023/07/20 21:22:46 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strcpy(char *dest, char *source, int len)
{
	while (*dest != '\0' && *source != '\0' && len--)
		*(dest++) = *(source++);
	if (*source == '\0')
		*dest = '\0';
}