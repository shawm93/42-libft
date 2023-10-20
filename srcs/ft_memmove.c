/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:42:59 by long              #+#    #+#             */
/*   Updated: 2023/10/20 14:14:28 by long             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*d;
	char	*s;

	if (!dst && !src)
		return (NULL);
	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (s > d)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (len--)
			d[len] = s[len];
	}
	return (dst);
}
/*
int	main(void)
{
	char	str[100] = "Learningisfun";

	char *first, *second;
	first = str;
	second = str;
	printf("Original string: %s\n", str);
	// when overlap it start from first position
	memmove(second + 8, first, 10);
	printf("memmove overlap: %s\n", str);
	return (0);
}
*/
