/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:54:25 by zyilmaz           #+#    #+#             */
/*   Updated: 2023/09/18 18:30:24 by zyilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	tmp;

	tmp = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		tmp *= nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (tmp);
}
