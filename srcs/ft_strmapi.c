/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:45:01 by long              #+#    #+#             */
/*   Updated: 2023/10/17 22:11:57 by long             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *ptr;

	i = 0;
	ptr = (char *)s;
	if (!s || !f)
		return (0);
	while (ptr[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	return (ptr);
}