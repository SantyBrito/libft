/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito-a <sbrito-a@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:06:55 by sbrito-a          #+#    #+#             */
/*   Updated: 2022/06/08 20:27:53 by sbrito-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

/* Tests for any character for which isupper(3) or islower(3) is true.
The value of the argument must be representable as
an unsigned char or the value of EOF.

int	main()
{
	char c;
	int result;

	printf("First is ft_isalpha results\n");
	c = '5';
	result = ft_isalpha(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'Q';
	result = ft_isalpha(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'l';
	result = ft_isalpha(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = '+';
	result = ft_isalpha(c);
	printf("When %c is passed, return value is %d\n", c, result);

	printf("Now is isalpha results\n");
	c = '5';
	result = isalpha(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'Q';
	result = isalpha(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'l';
	result = isalpha(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = '+';
	result = isalpha(c);
	printf("When %c is passed, return value is %d\n", c, result);
	return 0;
} */