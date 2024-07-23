/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyasser <yyasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:59:50 by yyasser           #+#    #+#             */
/*   Updated: 2024/07/22 15:30:47 by yyasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t word_len(char const *s, char c)
{
	size_t i;
	
	i = 0;

	while(s[i] && s[i] != c)
	{
		i++;
	}
	return(i);
}

size_t    count_words(char const *s, char c)
{
    size_t    count;
    int        in_word;

    count = 0;
    in_word = 0;
    while (*s)
    {
        if (*s != c && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if (*s == c)
            in_word = 0;
        s++;
    }
    return (count);
}

void free_split(char **dst, size_t i)
{
	while (i > 0)
		free(dst[--i]);
	free(dst);
}

int copy_current_word(char **dst, char const *s, char c)
{
	size_t i;
	size_t j;

	i = 0;
	while(*s)
	{
		j = 0;
		if (*s != c)
		{
			 dst[i] = (char *)malloc(sizeof(char) * (word_len(s, c) + 1));
			if (!dst[i])
			{
				free_split(dst, i);
				return(1);
			}
			while(*s && *s != c)
				dst[i][j++] = *s++;
			dst[i++][j] = '\0';
		}
		else {
			s++;
		}
	}
	dst[i] = NULL;
	return (0);
}

char **ft_split(char const *s, char c)
{
	char **dst;
	char count;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	dst = (char **)malloc(sizeof(char *) * (count + 1));
	if (!dst)
		return (NULL);
	if (copy_current_word(dst, s, c) != 0)
		return (NULL);
	return(dst);
}


// int main()
// {
// 	char *s = "Yazan Yasser";
// 	char c = ' ';

// 	char **word = ft_split(s, c);
// 	printf("Here is the word bruh: %s", word[1]);
// }