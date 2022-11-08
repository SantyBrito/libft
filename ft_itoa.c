/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito-a <sbrito-a@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:48:29 by sbrito-a          #+#    #+#             */
/*   Updated: 2022/06/08 21:56:53 by sbrito-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_int(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	recursive(long n, char *str)
{
	char	c;

	if (n < 0)
	{
		*str++ = '-';
		recursive(-n, str);
		return ;
	}
	if (n == 0)
	{
		*str++ = '0';
		*str = '\0';
		return ;
	}
	c = n % 10 + '0';
	recursive(n / 10, str);
	while (n / 10)
	{
		str++;
		n /= 10;
	}
	*str++ = c;
	*str = '\0';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = len_int(n);
	str = malloc (len + 1 * sizeof(char));
	if (!str)
		return (NULL);
	recursive((long)n, str);
	return (str);
}

/* Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.

// int main()
// {
// 	int		n = 987654321;
// 	int		m = -123456789;
// 	char	*str;
// 	char	*ptr;

// 	str = ft_itoa(n);
// 	printf("%s\n", str);
// 	ptr = ft_itoa(m);
// 	printf("%s\n", ptr);
// }
*/