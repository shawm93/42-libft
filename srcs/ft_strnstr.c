/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:50:19 by long              #+#    #+#             */
/*   Updated: 2023/10/17 22:12:08 by long             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int counter;
	char *str;
	size_t i;

	str = (char *)haystack;
	i = 0;
	if (*needle == '\0')
		return (str);
	while (*str != '\0' && i < len)
	{
		counter = 0;
		while (*str == *needle && *needle != '\0')
		{
			str++;
			needle++;
			counter++;
		}
		if (*needle == '\0')
			return (str - counter);
		str = str - counter + 1;
		needle = needle - counter;
		i++;
	}
	return (0);
}