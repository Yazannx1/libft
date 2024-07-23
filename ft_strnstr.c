/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyasser <yyasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:59:50 by yyasser           #+#    #+#             */
/*   Updated: 2024/07/22 15:22:45 by yyasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t needle_len;
    const char *ps;
    const char *pn;
    
    needle_len = 0;
    
    while(needle[needle_len])
    {
        needle_len++;
    }
    if(needle_len == 0)
    {
        return((char *)haystack);
    }
    while(*haystack && len >= needle_len)
    {
        ps = haystack;
        pn = needle;

        while(*ps && *pn && (*ps == *pn))
        {
            ps++;
            pn++;
        }
        if(*pn == '\0')
        {
            return((char *)haystack);
        }
        haystack++;
        len--;
    }
    return(NULL);
}

// int main() {
//     const char *haystack = "Hello, this is a simple haystack.";
//     const char *needle = "simple";
//     size_t len = 30;
    
//     char *result = strnstr(haystack, needle, len);
    
//     if (result != NULL) {
//         printf("Found: '%s'\n", result);
//     } else {
//         printf("Not found within the first %zu characters.\n", len);
//     }
    
//     return 0;
// }