/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:45:15 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/25 23:03:17 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src && n > 0)
	{
		return (NULL);
	}
	if (d < s || d >= (s + n))
	{
		return (ft_memcpy(dest, src, n));
	}
	else
	{
		d = d + n;
		s = s + n;
		while (n-- > 0)
		{
			*(--d) = *(--s);
		}
	}
	return (dest);
}
/*
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s || d >= (s + n))
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		d = d + n;
		s = s + n;
		while (n-- > 0)
		{
			*(--d) = *(--s);
		}
	}
	return (dest);
}

int main(void)
{
    char str1[20] = "Hello, World!";
    char str2[20] = "Overlapping";

    // Teste normal
    printf("Before memmove: %s\n", str1);
    memmove(str1 + 7, str1, 13); // Copia "Hello, World!" para a parte final
    printf("After memmove: %s\n", str1);

    printf("Before ft_memmove: %s\n", str1);
    ft_memmove(str1 + 7, str1, 13); // Copia "Hello, World!" para a parte final
    printf("After ft_memmove: %s\n", str1);

    // Teste de sobreposição
    printf("Before overlapping memmove: %s\n", str2);
    memmove(str2 + 3, str2, 11); // "Overlapping" para "laplapping"
    printf("After overlapping memmove: %s\n", str2);

    printf("Before overlapping ft_memmove: %s\n", str2);
    ft_memmove(str2 + 3, str2, 11); // "Overlapping" para "laplapping"
    printf("After overlapping ft_memmove: %s\n", str2);

    return 0;
}
*/
