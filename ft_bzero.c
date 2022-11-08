/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito-a <sbrito-a@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:41:14 by sbrito-a          #+#    #+#             */
/*   Updated: 2022/06/08 19:39:09 by sbrito-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
	s = str;
}

/* Writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.

int	main ()
{
	char	str[] = "almost every programmer should know bzero!";
	ft_bzero	(str+6,7);
	puts (str);

	bzero (str+6, 7);
	printf ("%s\n", str);
	return 0;
} */