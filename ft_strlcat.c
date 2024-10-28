/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:59:57 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/28 20:37:14 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] && i < size)
	{
		i++;
	}
	j = 0;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
	{
		dst[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}
/*
void test_strlcat() {
    char dest1[50] = "Hello, ";
    char src1[] = "World!";
    size_t result1 = ft_strlcat(dest1, src1, sizeof(dest1));

    // Resetting dest1 ddfor the next test
    strcpy(dest1, "Hello, ");
    char src2[] = "42";
    size_t result2 = ft_strlcat(dest1, src2, sizeof(dest1));

    // Test with a buffer that's too small
    char dest3[10] = "Hello";
    char src3[] = " World!";
    size_t result3 = ft_strlcat(dest3, src3, sizeof(dest3));

    // Test with empty source
    char dest4[20] = "Original";
    char src4[] = "";
    size_t result4 = ft_strlcat(dest4, src4, sizeof(dest4));

    // Test with zero length
    char dest5[20] = "Initial";
    size_t result5 = ft_strlcat(dest5, src4, 0);

    // Test with both strings being empty
    char dest6[20] = "";
    char src6[] = "";
    size_t result6 = ft_strlcat(dest6, src6, sizeof(dest6));
}

int main() {
    test_strlcat();
    return 0;
}
*/
