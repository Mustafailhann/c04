/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:58:21 by muilhan           #+#    #+#             */
/*   Updated: 2022/09/13 15:20:53 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_undefined(char *str, int *ptr)
{
	int	sing;
	int	i;

	i = 0;
	sing = 1;
	while ((str[i] && str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			sing *= -1;
		i++;
	}
	*ptr = i;
	return (sing);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sing;
	int	result;

	result = 0;
	sing = ft_undefined(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] -48;
		i++;
	}
	result *= sing;
	return (result);
}
