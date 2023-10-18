/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:12:17 by long              #+#    #+#             */
/*   Updated: 2023/10/18 17:27:22 by long             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	isset(char c, char const *set)
{
	int	index;

	index = 0;
	while (set[index])
	{
		if (c == set[index])
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t s1_len;
	char *ptr;
	char *str;

	ptr = (char *)s1;
	while (isset(*ptr, set) && *ptr)
		ptr++;
	s1_len = ft_strlen(ptr);
	while (isset(ptr[s1_len - 1], set))
	{
		ptr[s1_len - 1] = '\0';
		s1_len--;
	}
	s1_len = ft_strlen(ptr);
	str = (char *)malloc(sizeof(char) + (s1_len + 1));
	while (s1_len >= 0)
	{
		str[s1_len] = ptr[s1_len];
		s1_len--;
	}
	return (str);
}