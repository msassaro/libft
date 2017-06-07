/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alloc_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msassaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 15:38:51 by msassaro          #+#    #+#             */
/*   Updated: 2017/06/01 13:39:40 by msassaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_alloc_tab(int x, int y)
{
	int		i;
	char	**tab;

	i = 0;
	if (!(tab = (char**)malloc(sizeof(char *) * (y + 1))))
		return (NULL);
	while (i < y)
	{
		if (!(tab[i] = ft_strnew(x + 1)))
			return (NULL);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
