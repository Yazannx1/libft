/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyasser <yyasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:59:50 by yyasser           #+#    #+#             */
/*   Updated: 2024/07/22 15:20:20 by yyasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;

    while(s[i])
    {
        i++;
    }
    return(i);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t lenOfS1;
    size_t j;

    i = 0;
    j = 0;
    lenOfS1 = 0;

    while(s1[lenOfS1])
        lenOfS1++;
    if(!s1)
        return(NULL);
    while(s1[i] && set[i])
    {
        if(s1[i] == set[i])
        {
            s1++;
        }
    i++;
    }
    i = 0;
    while(s1[lenOfS1])
    {
        if(s1[lenOfS1] == set[i])
        {
            i--;
        }
        lenOfS1--;
    }
    return((char *)s1);
}

// int main()
// {
//     printf("The trimmed string is this: ::%s::", ft_strtrim("aaaYazanaaa", "aaa"));
// }

// char const = abcyazanabc 
// char set = "abc";

// y

// j = strlen (s1);

// j = 4
// i = 3