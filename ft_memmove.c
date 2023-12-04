/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhcha <abakhcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:57:18 by abakhcha          #+#    #+#             */
/*   Updated: 2023/12/02 11:22:13 by abakhcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	l;

	l = n;
	if ((unsigned char *)dest == (unsigned char *)src)
		return ((unsigned char *)dest);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		while (l > 0)
		{
			((unsigned char *)dest)[l - 1] = ((unsigned char *)src)[l - 1];
			l--;
		}
	}
	return ((unsigned char *)dest);
}
