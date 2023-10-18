/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:43:56 by long              #+#    #+#             */
/*   Updated: 2023/10/18 17:08:33 by long             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int    i;
	char            *str;
	size_t			count;
	
	count = ft_strlen(s);
	if ((size_t)start >= count || len == 0)
		return (ft_strdup(""));
	i = 0;
	if (count > len)
		str = (char *)malloc(sizeof(char) * (len + 1));
	else
		str = (char *)malloc(sizeof(char) * (count + 1));
	if (!str)
		return (0);
	while ((size_t)i < len && s[start])
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
