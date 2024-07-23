/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyasser <yyasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:59:50 by yyasser           #+#    #+#             */
/*   Updated: 2024/07/22 15:31:01 by yyasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *p;
    int i;

    p = (char *)malloc(sizeof(char) * ft_strlen((char*)s) + 1);
    if (!p)
        return(NULL);
    i = -1;
    while(s[++i])
    {
        p[i] = (*f)(i, s[i]);
    }
    p[i] = '\0';
    return(p);
}
char ft_toupper(unsigned int i, char c)
{
    (void)i;

    if(c >= 'a' && c <= 'z')
        c -= 32;
    return(c);
}
// int main()
// {
//     char s[] = "abduu";

//     char *potato = ft_strmapi(s, ft_toupper);

//     printf("My brother this is my toupper %s", potato);

// }