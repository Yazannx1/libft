/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyasser <yyasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:59:50 by yyasser           #+#    #+#             */
/*   Updated: 2024/07/22 15:29:35 by yyasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t strlcat(char *dst, const char *src, size_t dstsize)
{

    int i;
    int j;

    i = 0;
    j = 0;

    while(*src)
    {
        i++;
    }

    if(!dst)
    {
        return(ft_strlen(src));
    }

    while(*src && dstsize >= ft_strlen(dst))
    {
        i++;
        dst[j] = src[i];
        j++;
    }

    return(ft_strlen(dst));
}