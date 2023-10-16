/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:43:33 by long              #+#    #+#             */
/*   Updated: 2023/10/16 21:49:39 by long             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char    *ft_strrchr(char *s, int c)
{
    char *ptr;
    int i;
    
    i = ft_strlen(s);
    while (i >= 0)
    {
        ptr = &s[i];
        if (s[i] == c)
            return (ptr);
        i--;
    }
    return (0);
}