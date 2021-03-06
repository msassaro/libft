/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msassaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 10:45:27 by msassaro          #+#    #+#             */
/*   Updated: 2015/11/26 17:58:50 by msassaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function writes "n" times zero into "s"
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
