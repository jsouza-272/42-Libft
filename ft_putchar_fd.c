/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:22:01 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/05 14:27:19 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief 
/// @param c 
/// @param fd 
void	ft_putchar_fd(char c, int fd)
{
	if (!c)
		return(NULL);
	write(fd, &c, 1);
}
