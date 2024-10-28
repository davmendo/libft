/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 23:06:02 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/28 21:18:09 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}
/*
void test_calloc() {
    // Teste 1: Alocação normal
    int *arr = (int *)calloc(5, sizeof(int));
    if (arr == NULL) {
        printf("Test 1 Failed: Memory allocation failed.\n");
    } else {
        printf("Test 1 Passed: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", arr[i]); // Deve imprimir 0 0 0 0 0
        }
        printf("\n");
        free(arr);
    }

    // Teste 2: Alocação com zero elementos
    int *zero_arr = (int *)calloc(0, sizeof(int));
    if (zero_arr == NULL) {
        printf("Test 2 Failed: Memory allocation failed.\n");
    } else {
        printf("Test 2 Passed: Allocated zero elements (should not crash).\n");
        free(zero_arr);
    }

    // Teste 3: Alocação com tamanho de elemento zero
    int *size_zero_arr = (int *)calloc(5, 0);
    if (size_zero_arr == NULL) {
        printf("Test 3 Failed: Memory allocation failed.\n");
    } else {
        printf("Test 3 Passed: Allocated with size zero (should not crash).\n");
        free(size_zero_arr);
    }
    // Teste 4: Overflow durante a alocação (usando um valor alto)
    size_t nmemb = SIZE_MAX; // Exemplo de um número muito grande
    size_t size = 2;        // e um tamanho pequeno
    int *overflow_arr = (int *)calloc(nmemb, size);
    if (overflow_arr == NULL) {
        printf("Test 4 Passed: Overflow detected, allocation failed.\n");
    } else {
        printf("Test 4 Failed: Memory allocation succeeded unexpectedly.\n");
        free(overflow_arr);
    }
}

int main() {
    test_calloc();
    return 0;
}
*/
