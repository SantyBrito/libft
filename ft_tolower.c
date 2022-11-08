/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito-a <sbrito-a@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 14:44:10 by sbrito-a          #+#    #+#             */
/*   Updated: 2022/06/08 20:17:59 by sbrito-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/* Converts an upper-case letter to the corresponding lower-case letter.

int main()
{
	char chr = 'A';
	char chr2 = 'Z';

	printf("%c\n", ft_tolower(chr));
	printf("%c\n", ft_tolower(chr2));
}
*/