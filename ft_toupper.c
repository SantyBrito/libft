/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito-a <sbrito-a@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 14:43:47 by sbrito-a          #+#    #+#             */
/*   Updated: 2022/06/08 20:18:53 by sbrito-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/* Converts a lower-case letter to the corresponding upper-case letter.

int main()
{
	char chr = 'a';
	char chr2 = 'z';

	printf("%c\n", ft_toupper(chr));
	printf("%c\n", ft_toupper(chr2));
}
*/