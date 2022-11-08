/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito-a <sbrito-a@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:00:16 by sbrito-a          #+#    #+#             */
/*   Updated: 2022/06/08 20:34:02 by sbrito-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/* Computes the length of the string s.
The strnlen() function attempts to compute
the length of s, but never scans beyond
the first maxlen bytes of s.

int main ()
{
	printf ("%ld\n", ft_strlen ("Hello World"));
	printf ("%ld\n", strlen ("Hello World"));
}
*/