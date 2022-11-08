/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito-a <sbrito-a@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:06:04 by sbrito-a          #+#    #+#             */
/*   Updated: 2022/06/08 21:12:23 by sbrito-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count >= 4294967295 || size >= 4294967295)
		return (NULL);
	ptr = malloc (count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/* It allocate memory.  The allocated memory is 
aligned such that it can be used for any data type,
including AltiVec- and SSE-related types. 
Contiguously allocates enough space for count objects that are 
size bytes of memory each and returns
a pointer to the allocated memory.  
The allocated memory is filled with bytes of value zero.

int main () {
	int i, n;
	int *a;
	int e, m;
	int *b;

	printf("Number of elements to be entered in ft_calloc:");
	scanf("%d",&m);

	b = (int*)ft_calloc(m, sizeof(int));
	printf("Enter %d numbers:\n",m);
	for( e=0 ; e < m ; e++ ) {
		scanf("%d",&b[e]);
	}

	printf("The numbers entered are: ");
	for( e=0 ; e < m ; e++ ) {
		printf("%d \n",b[e]);
	}
	free( b );

	printf("Number of elements to be entered in calloc:");
	scanf("%d",&n);

	a = (int*)calloc(n, sizeof(int));
	printf("Enter %d numbers:\n",n);
	for( i=0 ; i < n ; i++ ) {
		scanf("%d",&a[i]);
	}

	printf("The numbers entered are: ");
	for( i=0 ; i < n ; i++ ) {
		printf("%d \n",a[i]);
	}
	free( a );

	return(0);
} */