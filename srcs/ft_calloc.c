/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:05:23 by long              #+#    #+#             */
/*   Updated: 2023/10/17 12:34:02 by long             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void    *big;

    big = malloc(count * size);
    if (!big)
        return (0);
    ft_bzero(big, count * size);
    return (big);
}