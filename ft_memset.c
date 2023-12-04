/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhcha <abakhcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:58:38 by abakhcha          #+#    #+#             */
/*   Updated: 2023/12/02 19:54:40 by abakhcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*bb;

	if (b == NULL)
		return (NULL);
	bb = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		bb[i] = c;
		i++;
	}
	return (bb);
}
