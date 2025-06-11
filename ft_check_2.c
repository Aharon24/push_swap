/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:39:01 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/11 22:08:52 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_space(char **str)
{
	int	i;

	i = 0;
	while ((str[1][i] >= 9 && str[1][i] <= 13) || str[1][i] == 32)
		i++;
	if (str[1][i] == '\0')
		return (0);
	return (1);
}


int ft_check_normal_number(char **str)
{
	int i;
	int j;
	int n;
	int s;

	i = 0;
	j = 0;
	n = 0;
	s = 0;
	while (str[i])
	{
		j = 0;
		n = 0;
		s = 0;
		while (str[i][j])
		{
			if (str[i][j] >= '0' && str[i][j] <= '9')
				n++;
			if ((str[i][j] == '-' || str[i][j] == '+') && j != 0)
				s++;
			if (n > 0 && s > 0 )
				return (0);
			if( (str[i][0] == '-' || str[i][0] == '+') && str[i][1] == '\0')
					return(0);
				j++;
		}
		i++;
	}
	return(1);
}