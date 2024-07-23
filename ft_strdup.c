/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyasser <yyasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:59:50 by yyasser           #+#    #+#             */
/*   Updated: 2024/07/22 15:24:15 by yyasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlen(const char *s)
{
    int i;

    i = 0;

    while(s[i])
    {
        i++;
    }
    
    return(i);
}

char *ft_strdup(const char *s1)
{

    char *new;

    new = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
    while(!new)
        return(NULL);
    while(*s1)
        *new++ = *s1++;
            *new = '\0';
    return(new);
}

// int main(void)
// {
//     char *test = "Yazan\0";
//     char *test2 = ft_strdup(test);
//     printf("the string is: %p\t%p", test, test2);
// }