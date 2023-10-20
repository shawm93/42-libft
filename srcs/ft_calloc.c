/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:05:23 by long              #+#    #+#             */
/*   Updated: 2023/10/20 18:20:06 by long             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*big;
	size_t	total;

	if ((size != 0 && count > UINT_MAX / size)
		|| (count != 0 && size > UINT_MAX / count))
		return (0);
	total = count * size;
	big = malloc(total);
	if (!big)
		return (0);
	ft_bzero(big, count * size);
	return (big);
}
/*
void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	totalsize;
	char	*ptr;
	int		i;

	i = 0;
	if (size == (SIZE_MAX) && nitems == (SIZE_MAX))
		return (NULL);
	else if ((size == 0 && nitems > (SIZE_MAX / 2))
		|| (nitems == 0 && size > (SIZE_MAX / 2)))
		i++;
	else if (size >= (SIZE_MAX / 2) || nitems >= (SIZE_MAX / 2))
		return (NULL);
	totalsize = size * nitems;
	ptr = malloc(totalsize);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, totalsize);
	return (ptr);
}
*/
