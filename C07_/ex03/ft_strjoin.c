/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 02:47:49 by zyilmaz           #+#    #+#             */
/*   Updated: 2023/09/22 02:48:21 by zyilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_final_len(char **strs, int size, int sep_len)
{
	int	fin_len;
	int	i;

	i = 0;
	fin_len = sep_len * (size - 1);
	while (i < size)
	{
		fin_len += ft_str_len(strs[i]);
		i++;
	}
	return (fin_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		fin_len;
	int		i;
	char	*d;
	char	*str;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	fin_len = ft_final_len(strs, size, ft_str_len(sep));
	d = ((str = (char *)malloc(sizeof(char) * fin_len + 1)));
	if (!d)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(d, strs[i]);
		d += ft_str_len(strs[i]);
		if (i < size -1)
		{
			ft_strcpy(d, sep);
			d += ft_str_len(sep);
		}
		i++;
	}
	*d = '\0';
	return (str);
}
