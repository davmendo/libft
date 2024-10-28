/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:34:07 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/21 21:38:09 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
        char c[] = " 123456789asdbcderASDVWERGRTH_";

        while(c[i])
        {
                printf("Character: %c, Is Alpha: %d\n", c[i], ft_isprint(c[i]));
                i++;
        }
}
*/
