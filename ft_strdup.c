/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:35:32 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/28 20:35:50 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dest;

	i = 0;
	while (s[i])
	{
		i++;
	}
	dest = (char *)malloc((i + 1) * sizeof(char));
	if (!dest)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
void test_strdup(const char *original) {
    char *copy = strdup(original);

    if (copy == NULL) {
printf("Test failed: strdup returned NULL for original: \"%s\"\n", original);
        return;
    }

    // Testa se a cópia é igual à original
    if (strcmp(original, copy) == 0) {
        printf("Test passed: Original: \"%s\", Copy: \"%s\"\n", original, copy);
    } else {
        printf("Test failed: Original: \"%s\", Copy: \"%s\"\n", original, copy);
    }

    // Testa se a cópia é uma string diferente da original
    if (copy != original) {
        printf("Test passed: The copy is a different pointer than original.\n");
    } else {
        printf("Test failed: The copy points to the same memory as original.\n");
    }

    free(copy); // Libera a memória alocada
}

int main() {
    // Testes com strings normais
    test_strdup("Hello, World!");
    test_strdup("C programming");
    test_strdup("Testing strdup function");

    // Testes com strings vazias
    test_strdup("");

    // Testes com strings que contêm espaços
    test_strdup("   Leading and trailing spaces   ");

    // Testes com caracteres especiais
    test_strdup("Special characters: !@#$%^&*()_+");

    // Teste com um ponteiro NULL
    test_strdup(NULL); // Este teste deve ser tratado para evitar falha

    return 0;
}
*/
