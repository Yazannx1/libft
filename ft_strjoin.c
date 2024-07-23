/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyasser <yyasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:59:50 by yyasser           #+#    #+#             */
/*   Updated: 2024/07/23 12:30:11 by yyasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t is2;
    char *strmix;

    i = 0;
    is2 = 0;
    strmix = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);

    if(!strmix)
        return(NULL);
    if(!s1 || !s2)
        return(NULL);
    while(s1[is2])
        strmix[i++] = s1[is2++];
    is2 = 0;
    while(s2[is2])
        strmix[i++] = s2[is2++];

    strmix[i] = '\0';
    return(strmix);
}
