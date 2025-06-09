/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:29:28 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/09 19:20:21 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_swap(t_s **a)
{
	if (ft_list_len(*a) == 1)
		return ;
	else if (ft_list_len(*a) == 2)
	{
		if ((*a)->data > (*a)->next->data)
			sa(a);
	}
	else if (ft_list_len(*a) == 3)
		ft_sort_3(a);
	else if (ft_list_len(*a) == 4)
		ft_sort_4(a);
}
