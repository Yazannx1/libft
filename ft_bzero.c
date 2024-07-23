
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyasser <yyasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:59:50 by yyasser           #+#    #+#             */
/*   Updated: 2024/07/22 14:59:52 by yyasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */ 

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}

int main()
{
    char s[7894] = "Ehtisham";
    size_t n = 4;

    ft_bzero(s, n);
    printf("The name is%s", (void *)s);
}