/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:07:42 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/28 20:32:35 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n-- > 0)
	{
		*d++ = *s++;
	}
	return (dest);
}
/*
void test_memcpy() {
    char src1[] = "Hello, World!";
    char dest1[50]; // Buffer de destino

 char src1i[] = "Hello, World!";
    char dest1i[50]; // Buffer de destino


    // Teste 1: Cópia normal
    ft_memcpy(dest1, src1, strlen(src1) + 1); 
    printf("ft_Test 1: %s | Expected: Hello, World!\n", dest1);

    memcpy(dest1i, src1i, strlen(src1i) + 1); 
    printf("Test 1: %s | Expected: Hello, World!\n", dest1i);



   // Teste 4: Cópia com zero bytes
    char dest2[50];
    ft_memcpy(dest2, src1, 0); // Não deve fazer nada
    printf("ft_Test 4: %s | Expected: %s\n", dest2, dest2); // Deve estar vazio

 char dest2i[50];
    memcpy(dest2i, src1i, 0); // Não deve fazer nada
    printf("Test 4: %s | Expected: %s\n", dest2i, dest2i); // Deve estar vazio



    // Teste 5: Cópia de string vazia
    char src_empty[] = "";
    char dest_empty[50];
    ft_memcpy(dest_empty, src_empty, 1); // Cópia de string vazia
    printf("Test 5: %s | Expected: \n", dest_empty); // Deve estar vazio
}

// Teste 5: Cópia de string vazia
    char src_emptyi[] = "";
    char dest_emptyi[50];
    memcpy(dest_emptyi, src_emptyi, 1); // Cópia de string vazia
    printf("Test 5: %s | Expected: \n", dest_emptyi); // Deve estar vazio
}


int main() {
    test_memcpy();
    return 0;
}
*/
