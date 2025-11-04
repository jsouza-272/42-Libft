/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:13:29 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/03 17:46:06 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

/// @brief 
/// @param dest 
/// @param src 
/// @param n 
/// @return 
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*temp_src;
	unsigned char		*temp_dst;

	i = 0;
	temp_src = src;
	temp_dst = dest;
	if (!dest && !src)
		return (NULL);
	if (temp_dst > temp_src)
	{
		while (n--)
			temp_dst[n] = temp_src[n];
	}
	else
	{
		while (i < n)
		{
			temp_dst[i] = temp_src[i];
			i++;
		}
	}
	return (dest);
}
