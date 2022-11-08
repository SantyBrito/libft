/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito-a <sbrito-a@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:35:21 by sbrito-a          #+#    #+#             */
/*   Updated: 2022/06/08 20:26:36 by sbrito-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122)
		|| (c >= 48 && c <= 57))
		return (1);
	return (0);
}

/* Tests for any character for which isalpha(3) or isdigit(3) is true.
The value of the argument must
be representable as an unsigned char or the value of EOF.

int	main()
{
	char c;
	int result;

	printf("First is ft_isalnum results\n");

	c = '5';
	result = ft_isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = 'Q';
	result = ft_isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = 'l';
	result = ft_isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = '+';
	result = ft_isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);

	printf("Now is isalnum results\n");

	c = '5';
	result = isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = 'Q';
	result = isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = 'l';
	result = isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = '+';
	result = isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);

	return 0;
}
	else
		printf("Your statement is false\n");
	*/