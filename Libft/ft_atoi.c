/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 21:03:54 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/08 20:37:17 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str, t_arr *arr)
{
	int		i;
	long	num;
	int		m;

	i = 0;
	num = 0;
	m = 1;
	while (((str[i] >= 9 && str[i] <= 13) || (str[i] == 32)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			m = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10;
		num = num + (str[i] - 48);
		i++;
	}
	num = num * m;
	if (num > 2147483647 || num < -2147483648)
	{
		arr->check = 1;
		return (0);
	}
	return (num);
}
/*
int main(void)
{
	char a[] = "-1234sd";
	char b[] = "12345sb";
	int a1 = ft_atoi(a);
	int b1 = ft_atoi(b);
	printf("-1234sd = %d\n",a1);
	printf(" 12345sb = %d",b1);
	printf(" 12345sb = %d",b1);
	printf(" 12345sb = %d",b1);
	
}*/
