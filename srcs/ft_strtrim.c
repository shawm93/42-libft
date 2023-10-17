/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:12:17 by long              #+#    #+#             */
/*   Updated: 2023/10/17 16:32:04 by long             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int isset(char c, char const *set)
{
    int index;
    index = 0;
    while (set[index])
    {
        if (c == set[index])
            return (1);
        index++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int     s1_len;
    char    *ptr;

    ptr = (char *)s1;
    while (isset(*ptr, set))
        ptr++;
    s1_len = ft_strlen(ptr);
    while (isset(ptr[s1_len - 1], set))
    {
        ptr[s1_len - 1] = '\0';
        s1_len--;
    }
    return (ptr);
}