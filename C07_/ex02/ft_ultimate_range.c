/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 02:20:01 by zyilmaz           #+#    #+#             */
/*   Updated: 2023/09/22 02:51:32 by zyilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*d;
	int	*arr;
	int	i;
	int	s;

	s = max - min;
	if (s <= 0)
	{
		*range = 0;
		return (0);
	}
	d = ((arr = (int *)malloc(sizeof(int) * s + 1)));
	if (!d)
	{
		*range = 0;
		return (-1);
	}
	*range = d;
	i = 0;
	while (i < s)
	{
		d[i] = min + i;
		i++;
	}
	return (s);
}
