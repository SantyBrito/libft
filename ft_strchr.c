/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito-a <sbrito-a@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 19:12:21 by sbrito-a          #+#    #+#             */
/*   Updated: 2022/06/08 20:31:31 by sbrito-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

/* Locates the first occurrence of c 
(converted to a char) in the string pointed to by s.
The terminating null character is considered to be part 
of the string; therefore if c is `\0',
the functions locate the terminating `\0'.

int main () 
{
   const char str[] = "This is just a String"; 
   const char ch = 'j'; 
   printf("%s\n", strchr(str, ch));
   printf("%s\n", ft_strchr(str, ch));
}
*/