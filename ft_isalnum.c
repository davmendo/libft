/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:13:02 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/21 21:21:41 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int     main(void)
{
        int     i = 0;
        char c[] = "123456789asdbcderASDVWERGRTH_";

        while(c[i])
        {
                printf("Character: %c, Is Alpha: %d\n", c[i], ft_isalnum(c[i]));
                i++;
        }
}
*/
