/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 04:04:53 by manuel            #+#    #+#             */
/*   Updated: 2021/02/06 04:05:38 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_find_index(char c, char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if (c == *str++)
			return (i);
		i++;
	}
	return (-1);	
}
