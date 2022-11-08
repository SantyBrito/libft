/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito-a <sbrito-a@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:44:23 by sbrito-a          #+#    #+#             */
/*   Updated: 2022/06/08 20:47:27 by sbrito-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*char_dest;
	const char	*char_src;
	size_t		i;

	char_dest = (char *) dest;
	char_src = (const char *) src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}

/* Copies n bytes from memory area src to memory area dst.
If dst and src overlap, behavior is unde-fined.
Applications in which dst and src might overlap 
should use memmove(3) instead.

int	main ()
{
	char	src[] = "Copy cat this text";
	char	dest[100];

	char	*dest_ptr = ft_memcpy (dest, src, ft_strlen(src) +1);

	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("dest_ptr: %p\n", dest_ptr);
	printf("dest: %p\n", dest);
}
*/