/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:17:10 by long              #+#    #+#             */
/*   Updated: 2023/10/20 13:59:57 by long             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	total_len;

	i = 0;
	src_len = ft_strlen(src);
	if (!dst && !dstsize)
		return (src_len);
	dst_len = ft_strlen(dst);
	total_len = dst_len + src_len;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (src[i] && dst_len < dstsize - 1)
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
	}
	dst[dst_len] = '\0';
	return (total_len);
}
