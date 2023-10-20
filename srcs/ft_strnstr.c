/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:50:19 by long              #+#    #+#             */
/*   Updated: 2023/10/20 15:37:33 by long             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	counter;
	char	*str;
	size_t	i;

	if (!haystack && !len)
		return (0);
	str = (char *)haystack;
	i = 0;
	if (*needle == '\0')
		return (str);
	while (*str != '\0' && i++ < len)
	{
		counter = 0;
		while (*str == *needle && *needle != '\0' && counter + i - 1 < len)
		{
			str++;
			needle++;
			counter++;
		}
		if (*needle == '\0')
			return (str - counter);
		str = str - counter + 1;
		needle = needle - counter;
	}
	return (0);
}
