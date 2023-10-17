/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:56:26 by long              #+#    #+#             */
/*   Updated: 2023/10/17 16:04:40 by long             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t  total_len;
    char    *str;
    int     i;
    int     j;

    total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
    str = (char *)malloc(total_len * sizeof(char));
    i = -1;
    j = -1;
    while (s1[++i])
        str[i] = s1[i];
    while (s2[++j])
    {
        str[i] = s2[j];
        i++;
    }
    str[i] = '\0';
    return (str);
}