/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:44:06 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/01 21:17:18 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*end;
	char		*trim;
	size_t		len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
	}
	end = s1 + ft_strlen(s1) - 1;
	while (end > s1 && ft_strchr(set, *end))
	{
		end--;
	}
	len = end - s1 + 1;
	trim = (char *)malloc(len + 1);
	if (!trim)
		return (NULL);
	ft_memmove(trim, s1, len);
	trim[len] = '\0';
	return (trim);
}
/*
int main()
{
    char *s1 = "----Hello, world!-----";
    char *set = "-+";
    char *result = ft_strtrim(s1, set);

    if (result != NULL)
    {
        printf("Resultado: '%s'\n", result);  // Saída: 'Hello, world!'
        free(result);
    }
    else
    {
        printf("Erro ao alocar memória.\n");
    }

    return 0;
}

int	main(void)
{
    char *result;

    // Teste 1: Remover espaços no início e no fim
    result = ft_strtrim("   Hello, world!   ", " ");
    assert(strcmp(result, "Hello, world!") == 0);
    free(result);

    // Teste 2: Remover caracteres de tabulação e nova linha
    result = ft_strtrim("\n\tHello, world!\t\n", "\n\t");
    assert(strcmp(result, "Hello, world!") == 0);
    free(result);

    // Teste 3: String sem caracteres para remover
    result = ft_strtrim("Hello, world!", " ");
    assert(strcmp(result, "Hello, world!") == 0);
    free(result);

    // Teste 4: String composta apenas por caracteres do conjunto
    result = ft_strtrim("   ", " ");
    assert(strcmp(result, "") == 0);
    free(result);

    // Teste 5: String vazia
    result = ft_strtrim("", " ");
    assert(strcmp(result, "") == 0);
    free(result);

    // Teste 6: Conjunto de caracteres vazio
    result = ft_strtrim("Hello, world!", "");
    assert(strcmp(result, "Hello, world!") == 0);
    free(result);

    // Teste 7: Remover caracteres do início, meio e fim
    result = ft_strtrim("***Hello***World***", "*");
    assert(strcmp(result, "Hello***World") == 0);
    free(result);

    // Teste 8: Ponteiros nulos como entrada
    result = ft_strtrim(NULL, " ");
    assert(result == NULL);

    result = ft_strtrim("Hello, world!", NULL);
    assert(result == NULL);

    printf("Todos os testes de ft_strtrim passaram com sucesso!\n");
}
*/
