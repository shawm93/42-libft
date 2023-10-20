/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:43:56 by long              #+#    #+#             */
/*   Updated: 2023/10/20 13:52:30 by long             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;
	size_t			count;
	size_t			real;

	if (!s)
		return (NULL);
	count = ft_strlen(s);
	real = count;
	if ((size_t)start >= count || len == 0)
		return (ft_strdup(""));
	i = 0;
	if (count > len)
		real = len;
	str = (char *)malloc(sizeof(char) * (real + 1));
	if (!str)
		return (0);
	while ((size_t)i < real && s[start])
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
