/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito-a <sbrito-a@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:24:46 by sbrito-a          #+#    #+#             */
/*   Updated: 2022/06/08 20:28:35 by sbrito-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/* Tests for any printing character, including space (` ').
The value of the argument must be repre-
sentable as an unsigned char or the value of EOF.

int	main(void)
{
	char	c;
	int	result;

	printf("First is ft_isprint results\n");
	c = '5';
	result = ft_isprint(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'Q';
	result = ft_isprint(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'l';
	result = ft_isprint(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = '+';
	result = ft_isprint(c);
	printf("When %c is passed, return value is %d\n", c, result);

	printf("Now is isprint results\n");
	c = '5';
	result = isprint(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'Q';
	result = isprint(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'l';
	result = isprint(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = '+';
	result = isprint(c);
	printf("When %c is passed, return value is %d\n", c, result);
	return (0);
}
*/