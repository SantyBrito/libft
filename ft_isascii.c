/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito-a <sbrito-a@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:35:37 by sbrito-a          #+#    #+#             */
/*   Updated: 2022/06/08 20:28:15 by sbrito-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}

/* Tests for an ASCII character, which is any character
between 0 and octal 0177 inclusive.

int	main(void)
{
	char	c;
	int	result;

	printf("First is ft_isascii results\n");
	c = '5';
	result = ft_isascii(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'Q';
	result = ft_isascii(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'l';
	result = ft_isascii(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = '+';
	result = ft_isascii(c);
	printf("When %c is passed, return value is %d\n", c, result);

	printf("Now is isascii results\n");
	c = '5';
	result = isascii(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'Q';
	result = isascii(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'l';
	result = isascii(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = '+';
	result = isascii(c);
	printf("When %c is passed, return value is %d\n", c, result);
	return (0);
} */