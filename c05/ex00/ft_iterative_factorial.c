/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:49:43 by zyilmaz           #+#    #+#             */
/*   Updated: 2023/09/18 15:00:05 by zyilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	tmp;

	tmp = 1;
	if (nb < 0)
		return (0);
	while (nb >= 1)
	{
		tmp = tmp * nb;
		nb --;
	}
	return (tmp);
}
