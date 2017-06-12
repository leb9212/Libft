/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_twod.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 14:00:21 by elee              #+#    #+#             */
/*   Updated: 2016/12/09 15:11:15 by elee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_put_twod(char **map)
{
	int		index;

	index = -1;
	while (map[++index])
		ft_putendl(map[index]);
	return (1);
}