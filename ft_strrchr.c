/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 00:19:27 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/09 22:24:11 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*last;
	unsigned char	ch;

	ch = (unsigned char)c;
	last = NULL;
	while (*s)
	{
		if (*s == ch)
		{
			last = s;
		}
		s++;
	}
	if (ch == '\0')
	{
		return ((char *)s);
	}
	return ((char *)last);
}
/*
void test_strrchr(const char *str, int c) {
    char *result = ft_strrchr(str, c);

    // Verifica se o caractere está presente na string
    if (result != NULL) {
printf("Found '%c' in \"%s\" at position %ld\n", c, str, result - str);
    } else {
        printf("Test passed: '%c' not found in \"%s\"\n", c, str);
    }
}

int main() {
    // Testes com diferentes strings e caracteres
    test_strrchr("Hello, World!", 'o');       // Deve encontrar 'o' na posição 8
    test_strrchr("Hello, World!", 'z');       // Não deve encontrar 'z'
    test_strrchr("C programming", 'g');        // Deve encontrar 'g' na posição 8
    test_strrchr("C programming", 'C');        // Deve encontrar 'C' na posição 0
    test_strrchr("C programming", 'p');        // Deve encontrar 'p' na posição 2
    test_strrchr("1234567890", '5');           // Deve encontrar '5' na posição 4
    test_strrchr("1234567890", '0');           // Deve encontrar '0' na posição 9
    test_strrchr("abcdefg", 'a');              // Deve encontrar 'a' na posição 0
    test_strrchr("abcdefg", 'g');              // Deve encontrar 'g' na posição 6
    test_strrchr("abcdefg", 'h');              // Não deve encontrar 'h'
    test_strrchr("", 'a');      // Não deve encontrar 'a' em uma string vazia

    return 0;
}

int main() {
    const char *test_str = "Hello, World!";

    // Teste 1: Última ocorrência de 'o'
    char *result = ft_strrchr(test_str, 'o');
    if (result) {
        printf("Última ocorrência de 'o': %s\n", result);
    } else {
        printf("'o' não encontrado.\n");
    }

    // Teste 2: Última ocorrência de 'l'
    result = ft_strrchr(test_str, 'l');
    if (result) {
        printf("Última ocorrência de 'l': %s\n", result); // Esperado: "l!"
    } else {
        printf("'l' não encontrado.\n");
    }

    // Teste 3: Caractere que não está na string
    result = ft_strrchr(test_str, 'x');
    if (result) {
        printf("Última ocorrência de 'x': %s\n", result);
    } else {
        printf("'x' não encontrado.\n"); // Esperado
    }

    // Teste 4: Terminador nulo
    result = ft_strrchr(test_str, '\0');
    if (result) {
        printf("Última ocorrência de '\\0': %s\n", result); // Esperado: ""
    }

    return 0;
}
*/
