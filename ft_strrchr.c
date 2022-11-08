/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito-a <sbrito-a@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 19:12:32 by sbrito-a          #+#    #+#             */
/*   Updated: 2022/06/08 20:03:16 by sbrito-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int	i;

	i = ft_strlen(string);
	while (i >= 0)
	{
		if (string[i] == (char)c)
			return ((char *)&string[i]);
		i--;
	}
	return (0);
}

/* Identical to strchr(), except it locates the last occurrence of c.

int main () 
{
   const char str[] = "This is just a String"; 
   const char ch = 'j'; 
   printf("%s\n", strrchr(str, ch));
   printf("%s\n", ft_strrchr(str, ch));
}
*/