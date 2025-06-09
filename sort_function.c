/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:33:20 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/09 17:56:15 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_s **a)
{
	int number;

	number = 0;
	if (!a || !*a)
		return ;
	number = (*a)->data;
	(*a)->data = (*a)->next->data;
	(*a)->next->data = number;
        
}

void sb(t_s **b)
{
	int number;

	number = 0;
	if (!b || !*b)
		return ;
	number = (*b)->data;
	(*b)->data = (*b)->next->data;
	(*b)->next->data = number;
}

void ss(t_s **a , t_s **b)
{
	sa(a);
	sb(b);
}


void pa(t_s **a, t_s **b)
{
	t_s *temb;

	if(!*b || !b)
		return ;
	temb = *b;
	*b = (*b)->next;
	temb->next = *a;
	*a = temb;
}

void pb(t_s **a, t_s **b)
{
	t_s  *temb;

	if(!*a || !a)
		return	;
	temb  = *a;
	*a = (*a)->next;
	temb->next = *b;
	*b = temb;
}
