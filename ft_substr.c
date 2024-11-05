/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:35:51 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/30 21:13:37 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;
	size_t	s_len;

	i = 0;
	if (!s)
		return (NULL);
	r = (char *)malloc(len + 1);
	if (r == NULL)
		return (NULL);
	s_len = strlen(s);
	if (len > s_len - start)
		len = s_len - start;
	if (start <= ft_strlen(s))
	{
		while (i < len && s[i + start])
		{
			r[i] = s[i + start];
			i++;
		}
	}
	r[i] = '\0';
	return (r);
}
/*
void test_ft_substr()
{
    char *result;

    // Teste 1: Substring normal
    result = ft_substr("Hello, world!", 7, 5);
    assert(strcmp(result, "world") == 0);
    free(result);

    // Teste 2: Substring a partir do inicio
    result = ft_substr("Hello, world!", 0, 5);
    assert(strcmp(result, "Hello") == 0);
    free(result);

    // Teste 3: Substring com 'start' maior que o tamanho da string
    result = ft_substr("Hello, world!", 50, 10);
    assert(strcmp(result, "") == 0);
    free(result);

    // Teste 4: Substring maior que o restante da string
    result = ft_substr("Hello, world!", 7, 50);
    assert(strcmp(result, "world!") == 0);
    free(result);

    // Teste 5: Substring com comprimento zero
    result = ft_substr("Hello, world!", 5, 0);
    assert(strcmp(result, "") == 0);
    free(result);

    // Teste 6: String vazia como entrada
    result = ft_substr("", 0, 10);
    assert(strcmp(result, "") == 0);
    free(result);

    // Teste 7: Start = 0, len maior que string
    result = ft_substr("Test", 0, 10);
    assert(strcmp(result, "Test") == 0);
    free(result);
    
    // Teste 9: Substring com start igual ao tamanho da string
    result = ft_substr("Boundary", 8, 5);
    assert(strcmp(result, "") == 0);
    free(result);

    // Teste 10: Ponteiro nulo como entrada
    result = ft_substr(NULL, 5, 5);
    assert(result == NULL);

    printf("Todos os testes passaram com sucesso!\n");
}

int main()
{
    test_ft_substr();
    return 0;
}
*/
