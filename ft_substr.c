/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyasser <yyasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:59:50 by yyasser           #+#    #+#             */
/*   Updated: 2024/07/22 15:24:59 by yyasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *new;
    size_t str_len;

    i = 0;
    str_len = ft_strlen(s);

    

    new = (char *)malloc(sizeof(char) * len + 1);

    if(!new)
    {
        return(NULL);
    }

    while(i < len && start < str_len)
    {
        new[i++] = s[start++];
    }
    new[i] = '\0';
    return(new);
}

// int main(void)
// {
//     printf("%s", ft_substr("hello", 0, 4));
// }