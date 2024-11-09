/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:46:40 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/06 18:57:24 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			count++;
		}
		i++;
	}
	return (count);
}

static void	ft_free_all(char **result, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static char	**ft_allocate_result(size_t count)
{
	char	**result;

	result = (char **)malloc((count + 1) * sizeof(char *));
	if (!result)
	{
		return (NULL);
	}
	return (result);
}

static int	ft_allocate_and_fill(char **result, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			result[j] = ft_substr(s, start, i - start);
			if (!result[j++])
			{
				ft_free_all(result, j);
				return (0);
			}
		}
		else
			i++;
	}
	result[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**result;

	if (!s)
		return (NULL);
	count = ft_count_words(s, c);
	result = ft_allocate_result(count);
	if (!result)
		return (NULL);
	if (!ft_allocate_and_fill(result, s, c))
	{
		return (NULL);
	}
	return (result);
}
/*
int main(void)
{
    char **split_result;
    char *s = "Hello world example";
    char c = ' ';

    split_result = ft_split(s, c);

    for (int i = 0; split_result[i] != NULL; i++)
    {
        printf("%s\n", split_result[i]);
        free(split_result[i]); // Liberar memória de cada substring
    }
    free(split_result); // Liberar o array de ponteiros

    return (0);
}
*/
