/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:43:56 by long              #+#    #+#             */
/*   Updated: 2023/10/17 22:16:01 by long             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int    i;
	char            *str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (len));
	if (!str)
		return (0);
	while ((size_t)i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	while ((size_t)i < len)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
