/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:40:39 by long              #+#    #+#             */
/*   Updated: 2023/10/17 15:56:42 by long             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <stddef.h>

int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t count, size_t size);
int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isdigit(int c);
int ft_isascii(int c);
int ft_isprint(int c);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *b, int c, size_t len);
char    *ft_strchr(char *s, int c);
char *ft_strdup(const char *s1);
size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t	ft_strlen(const char *s);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
char    *ft_strrchr(char *s, int c);
int ft_tolower(int c);
int ft_toupper(int c);

char    *ft_itoa(int n);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);

#endif
