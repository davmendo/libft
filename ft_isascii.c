/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:25:28 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/22 18:05:38 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
                printf("Character: %c, Is Alpha: %d\n", c[i], ft_isascii(c[i]));
                i++;
        }
}
*/
