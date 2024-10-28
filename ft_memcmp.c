/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:31:42 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/26 22:59:47 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = ((unsigned char *)s1);
	str2 = ((unsigned char *)s2);
	while (n-- > 0)
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
		str1++;
		str2++;
	}
	return (0);
}
/*
int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    int result = ft_memcmp(str1, str2, 5);
    printf("ft_Teste 1 (Igual): %d (Esperado: 0)\n", result);

    char str1i[] = "Hello";
    char str2i[] = "Hello";
    int resulti = memcmp(str1i, str2i, 5);
    printf("Teste 1 (Igual): %d (Esperado: 0)\n", resulti);


    char str3[] = "Hello";
    char str4[] = "World";
    result = ft_memcmp(str3, str4, 5);
printf("ft_Teste 2 (Diferente): %d (Esperado: < 0)\n", result); 

    char str3i[] = "Hello";
    char str4i[] = "World";
    resulti = memcmp(str3i, str4i, 5);
printf("Teste 2 (Diferente): %d (Esperado: < 0)\n", resulti);

    char str5[] = "Hello";
    char str6[] = "Hell";
    result = ft_memcmp(str5, str6, 5);
printf("ft_Teste 3 (Prefixo): %d (Esperado: > 0)\n", result); 

    char str5i[] = "Hello";
    char str6i[] = "Hell";
    resulti = memcmp(str5i, str6i, 5);
    printf("Teste 3 (Prefixo): %d (Esperado: > 0)\n", resulti); 

    char str7[] = "Hello";
    char str8[] = "Hella"; // Apenas o quarto caractere é diferente
    result = ft_memcmp(str7, str8, 5);
    printf("ft_Teste 4 (Diferente em um byte): %d (Esperado: > 0)\n", result); 

    char str7i[] = "Hello";
    char str8i[] = "Hella"; // Apenas o quarto caractere é diferente
    resulti = memcmp(str7i, str8i, 5);
    printf("Teste 4 (Diferente em um byte): %d (Esperado: > 0)\n", resulti); 

    result = ft_memcmp(str1, str2, 0);
    printf("ft_Teste 5 (n = 0): %d (Esperado: 0)\n", result); // Deve ser 0

    resulti = memcmp(str1i, str2i, 0);
    printf("Teste 5 (n = 0): %d (Esperado: 0)\n", resulti); // Deve ser 0

    char str9[] = "abcdef";
    char str10[] = "abcXef"; // Diferente no quarto caractere
    result = ft_memcmp(str9, str10, 96);
printf("ft_Teste 6 (Diferente em uma parte): %d (Esperado: < 0)\n", result);

    char str9i[] = "abcdef";
    char str10i[] = "abcXef"; // Diferente no quarto caractere
    resulti = memcmp(str9i, str10i, 96);
printf("Teste 6 (Diferente em uma parte): %d (Esperado: < 0)\n", resulti);
    return 0;
}
*/
