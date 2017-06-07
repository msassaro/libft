/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_white_spaces.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msassaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 13:40:33 by msassaro          #+#    #+#             */
/*   Updated: 2017/06/01 13:41:15 by msassaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nb_remove(char *tmp, char c)
{
	int		i;
	int		c_to_remove;

	i = 0;
	c_to_remove = 0;
	while (tmp[i])
	{
		while (tmp[i] != c && tmp[i])
			i++;
		while (tmp[i] == c && tmp[i])
		{
			if (tmp[i - 1] == c)
				c_to_remove++;
			i++;
		}
	}
	return (c_to_remove);
}

char			*ft_remove_white_spaces(char *str, char c)
{
	int		i;
	int		len;
	int		c_to_remove;
	char	*tmp;
	int		j;

	i = 0;
	j = 0;
	str = ft_strtrim(str);
	len = ft_strlen(str);
	c_to_remove = ft_nb_remove(str, c);
	if (c_to_remove == 0)
		return (str);
	if (!(tmp = (char*)ft_memalloc(sizeof(char) * (len - c_to_remove + 1))))
		return (NULL);
	while (str[i])
	{
		if (str[i] != c)
			tmp[j++] = str[i];
		else if (str[i] == c && str[i - 1] != c)
			tmp[j++] = str[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
