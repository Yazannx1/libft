/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyasser <yyasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:59:50 by yyasser           #+#    #+#             */
/*   Updated: 2024/07/22 15:15:01 by yyasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Return value:

The string representing the integer.
NULL if the allocation fails.

Description:

Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.

Steps to Implement ft_itoa
Convert the Digits to Characters: Convert each digit of the number to its corresponding character and place it in the string.
Add the Null Terminator: Ensure the string is null-terminated.
*/

size_t count_digits(int n)
{

    int i;

    i = 0;
    if(n == 0)
    {
        i = 1;
    } else if(n < 0)
    {
        n = -n;
    }
    while(n != 0)
    {
        n /= 10;
        i++;
    }

    return(i);
}

char *ft_itoa(int n)
{
    int len = count_digits(n);
    char *str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str) {
        return NULL;
    }

    str[len] = '\0';

    if (n == 0) {
        str[0] = '0';
        return str;
    }

    int is_negative = 0;
    if (n < 0) {
        is_negative = 1;
        n = -n;
    }
    while(len > 0)
    {
        len--;
        str[len] = n % 10 + '0';
        n /= 10;
    }
    return (str);
}