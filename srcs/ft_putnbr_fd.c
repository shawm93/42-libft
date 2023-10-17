/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:00:49 by long              #+#    #+#             */
/*   Updated: 2023/10/17 22:11:03 by long             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long	long_nb;
	char	digit;

	long_nb = (long)nb;
	if (long_nb < 0)
	{
		long_nb *= -1;
		write(fd, "-", 1);
	}
	if (long_nb < 10)
		digit = (int)(long_nb) + '0';
	else
	{
		digit = (int)(long_nb % 10) + '0';
		ft_putnbr_fd((int)(long_nb / 10), fd);
	}
	write(fd, &digit, 1);
}
