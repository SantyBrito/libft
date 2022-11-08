/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito-a <sbrito-a@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:44:30 by sbrito-a          #+#    #+#             */
/*   Updated: 2022/06/08 20:30:39 by sbrito-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*casted_dst;
	char	*casted_src;

	casted_dst = (char *)dst;
	casted_src = (char *)src;
	if (n == 0 || (!casted_dst && !casted_src))
		return (dst);
	if (src < dst)
	{
		while (n--)
		{
			casted_dst[n] = casted_src[n];
		}
		return (dst);
	}
	ft_memcpy(dst, src, n);
	return (dst);
}

/* Copies len bytes from string src to string dst.
The two strings may overlap; the copy is always
done in a non-destructive manner.

if src < dst copy from back to front, otherwise use ft_memcpy

int	main ()
{
	char	src[] = "Copy this text";
	char	dest[100];

	char	*dest_ptr = ft_memmove (dest, src, strlen(src) +1);

	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("dest_ptr: %p\n", dest_ptr);
	printf("dest: %p\n", dest);
}
*/