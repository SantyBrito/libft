/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito-a <sbrito-a@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 23:01:38 by sbrito-a          #+#    #+#             */
/*   Updated: 2022/06/08 19:59:38 by sbrito-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	n2;

		n2 = (long)n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n2 = -n2;
	}
	if (n2 / 10)
	{
		ft_putnbr_fd(n2 / 10, fd);
	}
	ft_putchar_fd(n2 % 10 + '0', fd);
}

/* Outputs the integer ’n’ to the given file
descriptor. */