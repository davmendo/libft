/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:24:38 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/07 20:32:02 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;

	num = n;
	len = ft_get_num_len(num);
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	while (num != 0)
	{
		str[--len] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}
/*
int main(void)
{
	int	i = 69;
	int	j = -420;
	int	min = -2147483648;
	int	max = 2147483647;

	ft_putendl_fd(ft_itoa(i), 1);
	ft_putendl_fd(ft_itoa(j), 1);
	ft_putendl_fd(ft_itoa(min), 1);
	ft_putendl_fd(ft_itoa(max), 1);
	return (0);
}
*/
