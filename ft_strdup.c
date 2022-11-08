/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito-a <sbrito-a@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:06:33 by sbrito-a          #+#    #+#             */
/*   Updated: 2022/06/08 20:32:26 by sbrito-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(s) + 1;
	ptr = malloc(sizeof(char) * len);
	if (ptr)
		return (ft_memcpy(ptr, s, len));
	else
		return (NULL);
}

/* Allocates sufficient memory for a copy of the
string s1, does the copy, and returns a pointer to it.
The pointer may subsequently be used as
an argument to the function free(3).

If insufficient memory is available, 
NULL is returned and errno is set to ENOMEM.


return ptr ? ft_memcpy(ptr, s, len) : NULL; 
This is the same as the if/else from above but in a simplified version

int main()
{
	char source[] = "CheeksForDeeks1\n";

	char* target = ft_strdup(source);

	printf("%s", target);

	char source2[] = "CheeksForDeeks2\n";

	char* target2 = strdup(source2);

	printf("%s", target2);
	return 0;
}
*/