/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito-a <sbrito-a@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:08:26 by sbrito-a          #+#    #+#             */
/*   Updated: 2022/06/08 19:57:00 by sbrito-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) ptr;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (ptr = str);
}

/* Writes len bytes of value c (converted to an unsigned char) to the string b.

int	main ()
{
	char	str[] = "almost every programmer should know memset!";
	ft_memset	(str,'-',6);
	puts (str);

	memset (str,'-',6);
	puts (str);
	return 0;
}
*/