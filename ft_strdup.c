/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhcha <abakhcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:59:59 by abakhcha          #+#    #+#             */
/*   Updated: 2023/12/01 11:13:38 by abakhcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = 0;
	while (s[i])
	{
		i++;
	}
	p = (char *)malloc(i + 1);
	if (!p)
		return (NULL);
	while (s[j])
	{
		p[j] = s[j];
		j++;
	}
	p[j] = '\0';
	return (p);
}
