/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:12:17 by long              #+#    #+#             */
/*   Updated: 2023/10/20 13:53:16 by long             ###   ########.fr       */
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
	size_t	end;
	char	*str;
	char	*ptr;

	if (!s1 || !set)
		return (0);
	ptr = (char *)s1;
	while (isset(*ptr, set))
		ptr++;
	end = ft_strlen(ptr);
	while (isset(ptr[end - 1], set) && end > 0)
		end--;
	str = (char *)malloc(sizeof(char) * (1 + end));
	if (str)
		ft_strlcpy(str, &ptr[0], end + 1);
	return (str);
}
