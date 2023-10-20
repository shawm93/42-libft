/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:06:39 by long              #+#    #+#             */
/*   Updated: 2023/10/20 16:01:08 by long             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strncmp(const char *s11, const char *s22, size_t n)
{
	size_t	count;
	char	*s1;
	char	*s2;

	count = 0;
	s1 = (char *)s11;
	s2 = (char *)s22;
	while (s1[count] != '\0' && s2[count] != '\0' && count < n)
	{
		if (s1[count] != s2[count])
			return ((unsigned char)s1[count] - (unsigned char)s2[count]);
		count++;
	}
	if (count != n)
		return ((unsigned char)s1[count] - (unsigned char)s2[count]);
	return (0);
}
