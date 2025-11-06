/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 09:59:41 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/06 15:17:25 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_count(const char *s, char c)
{
	int		i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static const char	*jumpc(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] == c)
	{
		i++;
	}
	return (&s[i]);
}

static size_t	word_len(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**free_all(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**arr;
	size_t	scount;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	scount = str_count(s, c);
	arr = ft_calloc((scount + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	while (i < scount)
	{
		s = jumpc(s, c);
		arr[i] = malloc(sizeof(char) * (word_len(s, c) + 1));
		if (!arr[i])
			return (free_all(arr));
		ft_strlcpy(arr[i], s, word_len(s, c) + 1);
		i++;
		s = s + word_len(s, c);
	}
	return (arr);
}
