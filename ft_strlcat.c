/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito-a <sbrito-a@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 18:54:17 by sbrito-a          #+#    #+#             */
/*   Updated: 2022/06/08 20:32:45 by sbrito-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendest;
	size_t	lensrc;
	size_t	j;

	lendest = ft_strlen(dst);
	lensrc = ft_strlen(src);
	j = 0;
	if (dstsize == 0 || dstsize <= lendest)
	{
		return (dstsize + lensrc);
	}
	while ((j < (dstsize - lendest - 1)) && (src[j] != 0))
	{
		dst[lendest + j] = src[j];
		j++;
	}
	dst[lendest + j] = '\0';
	return (lendest + lensrc);
}

/* Copy and concatenate strings with the same 
input parameters and output result as snprintf(3).

int main()
{
	char src[6] = "Hello";
	char dst1[255] = "Friend";
	char dst2[10] = "";
	char dst3[255] = "Friend";
	char dst4[10] = "";
	size_t size = 7; 

	printf("dst1: %lu %s\n", ft_strlcat(dst1, src, size), dst1);
	printf("dst2 before: %s\n", dst2);
	printf("dst2 after:%zu %s\n",ft_strlcat(dst2, src, 4), dst2);

	printf("dst3: %lu %s\n", strlcat(dst3, src, size), dst3);
	printf("dst4 before: %s\n", dst4);
	printf("dst4 after:%zu %s\n",strlcat(dst4, src, 4), dst4);
}
*/