/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:14:24 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/07 18:49:26 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_string(char **arr)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	// a.out case///!!!!!!
	while (arr[i])
	{
		j = 0;
		ft_printf("%s\n",arr[i]);
		while (arr[i][j])
		{
			if (arr[i][j] >= '0' && arr[i][j] <= '9')
				j++;
			else	
				return (0);
		}
		i++;
	}
	return(1);
}