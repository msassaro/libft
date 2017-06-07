/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msassaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 10:45:51 by msassaro          #+#    #+#             */
/*   Updated: 2015/11/24 15:02:13 by msassaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Will allocate a sufficient memory to copy the string "s1"
** It does the copy and returns a ptr to it.
** If memory allocation fails ==> returns NULL
*/

char	*ft_strdup(const char *s)
{
	char	*dest;

	dest = (char*)malloc(sizeof(char) * (ft_strlen((char*)s) + 1));
	if (dest == NULL)
		return (NULL);
	else
		return (ft_strcpy(dest, s));
}
