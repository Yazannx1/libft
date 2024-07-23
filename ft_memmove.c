/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyasser <yyasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:18:31 by yyasser           #+#    #+#             */
/*   Updated: 2024/07/22 15:22:31 by yyasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *memmove(void *str1, const void *str2, size_t n)
{
    size_t i;

    i = 0;
    char *p = (char *)str1;
    char *p2 = (char *)str2;

    while(*p2 && i < n)
    {
        p[i] = p2[i];
        i++;
    }
    return((void *)p);
}