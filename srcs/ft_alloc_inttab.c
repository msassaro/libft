/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alloc_inttab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msassaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 15:38:51 by msassaro          #+#    #+#             */
/*   Updated: 2017/06/01 13:40:06 by msassaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		**ft_alloc_inttab(int x, int y)
{
	int		i;
	int		**tab;

	i = 0;
	if (!(tab = (int**)malloc(sizeof(int *) * (y + 1))))
		return (NULL);
	while (i < y)
	{
		if (!(tab[i] = (int*)malloc(sizeof(int) * (x + 1))))
			return (NULL);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
