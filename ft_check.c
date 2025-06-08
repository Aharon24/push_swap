/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:14:24 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/08 21:55:05 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_string(char **arr,char *argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	arr =  ft_split(argv,' ');
	while(arr[i])
	{
		j = 0;
		while (arr[i][j])
		{
			if ((arr[i][j] >= '0' && arr[i][j] <= '9') || arr[i][j] == '-' || arr[i][j] == '+')
				j++;
			else
			{
				ft_printf("Error\n");
				ft_free(arr);
				return (0);
			}
		}
		i++;
	}
	ft_free(arr);
	return(1);
}


int ft_check_argv(char **arr,char **argv)
{
	int i ;
	
	i = 1;
	while(argv[i])
	{
		if(ft_check_string(arr,argv[i]) == 0)
			return(0);
		i++;	
	}
	return(1);
}

int	ft_check_signed(char **arr)
{
	int	i;
	int	j;
	int sin_minus;
	int sin_plus;
	
	sin_minus = 0;
	sin_plus = 0;
	i = 0;
	j = 0;
	while (arr[i])
	{
		j = 0;
		while (arr[i][j])
		{
			if (arr[i][j] == '-')
				sin_minus++;
			else if(arr[i][j] == '+')
				sin_plus++;
			else if (sin_plus == 2 || sin_minus == 2)
				return (0);
			j++;
		}
		i++;
	}
	return(1);
}


int ft_strlen_arr(char **arr)
{
	int i;
	int j;
	while(arr[i])
	{
		if( ft_strlen(arr[i]) > 11)
		{
			ft_printf("Error\n");
			ft_free(arr);
			return (0);
		}
		i++;
	}
	return(1);
}

