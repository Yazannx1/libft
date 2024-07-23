/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyasser <yyasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:59:50 by yyasser           #+#    #+#             */
/*   Updated: 2024/07/23 14:58:13 by yyasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int index;
    int sign = 1;
    long res;

    index = 0;
    index = 1;
    index = 0;
    res = 0;
    while((str[index] == ' ') || (str[index] >= 9 && str[index] <= 13))
        index++;
    if(str[index] == '+' || str[index] == '-')
    {
        if (str[index] == '-')
            sign = -1;
        index++;
    }
    while(str[index])
    {
        res *= 10;
        res += str[index] - 48;
        index++;
    }
    res *= sign;
    return((int)res);
}

int main()
{
    char *str = "       -123";

    printf("Potato is potato: %d", ft_atoi(str));
}