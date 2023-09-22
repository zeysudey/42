/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 02:14:13 by zyilmaz           #+#    #+#             */
/*   Updated: 2023/09/22 02:19:33 by zyilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		r;
	int		i;
	int		*b;
	int		*d;

	if (min >= max)
		return (0);
	r = max - min;
	d = ((b = malloc(r * sizeof(int))));
	if (!d)
		return (0);
	i = 0;
	while (i < r)
	{
		b[i] = min + i;
		i++;
	}
	return (b);
}
