/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:42:59 by long              #+#    #+#             */
/*   Updated: 2023/10/16 22:59:56 by long             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t  i;
    char    *d;
    char    *s;

    d = (char *)dst;
    s = (char *)src;
    i = 0;
    while (i < len && s[i])
    {
        d[i] = s[i];
        i++;
    }
    return (dst);
}