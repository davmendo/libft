/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 20:10:05 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/26 21:21:00 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	str = ((const unsigned char *)s);
	i = 0;
	while (i < n)
	{
		if (str[i] == (const unsigned char)c)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main() {
    char str1[] = "Hello, World!";
    char *result1 = ft_memchr(str1, 'H', strlen(str1));
    if (result1) {
printf("ft_Teste 1: Found '%c' at position %ld\n", *result1, result1 - str1);
    } else {
        printf("ft_Teste 1: Character not found.\n");
    }
   
    char str1i[] = "Hello, World!";
    char *result1i = memchr(str1i, 'H', strlen(str1i));
    if (result1i) {
printf("Teste 1: Found '%c' at position %ld\n", *result1i, result1i - str1i);
    } else {
        printf("Teste 1: Character not found.\n");
    }

    // Teste 2: Caractere encontrado no meio
    char *result2 = ft_memchr(str1, 'o', strlen(str1));
    if (result2) {
printf("ft_Teste 2: Found '%c' at position %ld\n", *result2, result2 - str1);
    } else {
        printf("ft_Teste 2: Character not found.\n");
    }

    char *result2i = memchr(str1i, 'o', strlen(str1i));
    if (result2) {
printf("Teste 2: Found '%c' at position %ld\n", *result2i, result2i - str1i);
    } else {
        printf("Teste 2: Character not found.\n");
    }

    // Teste 3: Caractere não encontrado
    char *result3 = ft_memchr(str1, 'x', strlen(str1));
    if (result3) {
printf("ft_Teste 3: Found '%c' at position %ld\n", *result3, result3 - str1);
    } else {
        printf("ft_Teste 3: Character not found.\n");
    }
    
    char *result3i = memchr(str1i, 'x', strlen(str1i));
    if (result3i) {
printf("Teste 3: Found '%c' at position %ld\n", *result3i, result3i - str1i);
    } else {
        printf("Teste 3: Character not found.\n");
    }

    // Teste 4: Caractere encontrado no final da string
    char *result4 = ft_memchr(str1, '!', strlen(str1));
    if (result4) {
printf("ft_Teste 4: Found '%c' at position %ld\n", *result4, result4 - str1);
    } else {
        printf("ft_Teste 4: Character not found.\n");
    }

    char *result4i = memchr(str1i, '!', strlen(str1i));
    if (result4i) {
printf("Teste 4: Found '%c' at position %ld\n", *result4i, result4i - str1i);
    } else {
        printf("Teste 4: Character not found.\n");
    }


    // Teste 5: Teste com n = 0 (não deve encontrar nada)
    char *result5 = ft_memchr(str1, 'H', 0);
    if (result5) {
printf("ft_Teste 5: Found '%c' at position %ld\n", *result5, result5 - str1);
    } else {
        printf("ft_Teste 5: Character not found.\n");
    }

    char *result5i = memchr(str1i, 'H', 0);
    if (result5i) {
printf("Teste 5: Found '%c' at position %ld\n", *result5i, result5i - str1i);
    } else {
        printf("Teste 5: Character not found.\n");
    }


    // Teste 6: Teste em um array de bytes
    unsigned char bytes[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    unsigned char *result6 = ft_memchr(bytes, 5, sizeof(bytes));
    if (result6) {
printf("ft_Teste 6: Found %d at position %ld\n", *result6, result6 - bytes);
    } else {
        printf("ft_Teste 6: Character not found.\n");
    }
    unsigned char bytesi[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    unsigned char *result6i = memchr(bytesi, 5, sizeof(bytesi));
    if (result6i) {
printf("Teste 6: Found %d at position %ld\n", *result6i, result6i - bytesi);
    } else {
        printf("Teste 6: Character not found.\n");
    }

}
*/
