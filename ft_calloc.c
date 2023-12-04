/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhcha <abakhcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:19:29 by abakhcha          #+#    #+#             */
/*   Updated: 2023/12/01 14:58:03 by abakhcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t s, size_t size)
{
	void	*ptr;

	if (size && s * size > (size_t)-1)
		return (NULL);
	ptr = (void *)malloc(s * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, s * size);
	return (ptr);
}
