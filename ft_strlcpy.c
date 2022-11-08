/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito-a <sbrito-a@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 18:53:41 by sbrito-a          #+#    #+#             */
/*   Updated: 2022/06/08 20:33:26 by sbrito-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i])
	{
		i++;
	}
	if (dstsize == 0)
		return (i);
	while (src[j] && j < (dstsize - 1))
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}

/* Copy and concatenate strings with the same
input parameters and output result as snprintf(3).

int main ()
{
	char dest[34] = ".";
	char dest2[34] = ".";
	char src[] = "Lenght of the full string is 31";
	size_t size = 5;

	printf("My function result: %lu %s\n", ft_strlcpy(dest, src, size), dest);
	ssize_t c = strlcpy(dest2, src, size);
	printf("Real function result: %ld %s\n", c, dest2);
}
*/