/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyasser <yyasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:59:50 by yyasser           #+#    #+#             */
/*   Updated: 2024/07/23 14:58:01 by yyasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H
#include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

void *ft_memset(void *s, int c, size_t len);
void ft_bzero(void *s, size_t n);
size_t ft_strlen(const char *str);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_atoi(const char *str);
void *ft_calloc(size_t count, size_t size);
char *ft_itoa(int n);
void *ft_memset(void *s, int c, size_t len);
char **ft_split(char const *s, char c);
char *ft_strchr(const char *s, int c);
char *ft_strdup(const char *s1);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);

#endif
