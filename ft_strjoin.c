/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:55:08 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/01 19:46:10 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	r = (char *)malloc(len1 + len2 + 1);
	if (r == NULL)
	{
		return (NULL);
	}
	ft_memmove(r, s1, len1);
	ft_memmove(r + len1, s2, len2);
	r[len1 + len2] = '\0';
	return (r);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s1 = "Hello, ";
    char *s2 = "world!";
    char *result = ft_strjoin(s1, s2);

    if (result != NULL)
    {
        printf("%s\n", result); // Saída: Hello, world!
        free(result);           // Libera a memória alocada
    }
    else
    {
        printf("Erro ao alocar memória.\n");
    }

    return 0;
}

int	main()
{
    char *result;

    // Teste 1: Concatenar duas strings normais
    result = ft_strjoin("Hello, ", "world!");
    assert(strcmp(result, "Hello, world!") == 0);
    free(result);

    // Teste 2: Concatenar com uma string vazia
    result = ft_strjoin("Hello", "");
    assert(strcmp(result, "Hello") == 0);
    free(result);

    // Teste 3: Concatenar uma string vazia com outra
    result = ft_strjoin("", "world!");
    assert(strcmp(result, "world!") == 0);
    free(result);

    // Teste 4: Concatenar duas strings vazias
    result = ft_strjoin("", "");
    assert(strcmp(result, "") == 0);
    free(result);

    // Teste 5: Concatenar strings com caracteres especiais
    result = ft_strjoin("Hello, ", "\nworld!");
    assert(strcmp(result, "Hello, \nworld!") == 0);
    free(result);

    // Teste 6: Concatenar strings longas
    result = ft_strjoin("This is a long string. ", 
    "And this is another long string.");
    assert(strcmp(result, "This is a long string. 
    And this is another long string.") == 0);
    free(result);

    // Teste 7: Ponteiros nulos como entrada
    result = ft_strjoin(NULL, "world!");
    assert(result == NULL);

    result = ft_strjoin("Hello", NULL);
    assert(result == NULL);

    printf("Todos os testes de strjoin passaram com sucesso!\n");
}
*/
