/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:31:47 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/09 19:39:00 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_3(t_s **a)
{
	int first;
	int second;
	int threed;

	first  = (*a)->data;
	second = (*a)->next->data;
	threed = (*a)->next->next->data;
	if(first  > second && second < threed && first < threed)
		sa(a);
	else if (first  > second && second > threed )
	{
		sa(a);
		rra(a);
	}
	else if(first  > second && second < threed && first > threed )
		ra(a);
	else if(first  < second && second > threed && first < threed)
	{
		sa(a);
		ra(a);
	}
	else if(first  < second && second > threed && first > threed)
		rra(a);
}


void	ft_sort_4(t_s **a)
{
	int index;

	index = 0;
	index =  ft_find_index_min(a);
	
}


int ft_find_index_min(t_s *a)
{
	int min;
	int	i;
	int index;

	i = 0;
	index = 0;
	min = 2147483647;
	while(a)
	{
		if(a->data < min)
		{
			min = a->data;
			index = i;
		}
		a = a->next;
		i++;
	}
	return(min);
}