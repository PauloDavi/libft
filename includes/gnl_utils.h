/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_utils.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:45:22 by pdavi-al          #+#    #+#             */
/*   Updated: 2025/03/30 17:01:31 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_UTILS_H
#define GNL_UTILS_H

#include <stdlib.h>
#include <unistd.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 1000
#endif

char *get_next_line(int fd);
char **get_memory(void);
void free_gnl_memory(int fd);
char *clear_memory(char *memory);
char *get_whole_line(char *memory);
char *read_line_break(int fd, char *memory);
size_t ft_gnl_strlen(const char *str);
char *ft_gnl_strchr(const char *s, char c);
char *ft_gnl_strjoin(char *s1, char const *s2);
size_t ft_gnl_strlcpy(char *dest, const char *src, size_t size);

#endif
