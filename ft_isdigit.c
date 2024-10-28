/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:02:29 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/21 21:11:34 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
                printf("Character: %c, Is Alpha: %d\n", c[i], ft_isdigit(c[i]));
                i++;
        }
}
*/
