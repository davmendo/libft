/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:29:07 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/21 21:12:25 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int	main(void)
{
	int	i = 0;
	char c[] = "123456789asdbcderASDVWERGRTH_";

	while(c[i])
	{
		printf("Character: %c, Is Alpha: %d\n", c[i], ft_isalpha(c[i]));
		i++;
	}
}
*/
