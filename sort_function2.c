/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_function2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:56:47 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/09 18:23:37 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_s **a)
{
	t_s	*first;
	t_s	*last;

	if (!a || !*a || (*a)->next)
		return ;
	first = *a;
	*a = (*a)->next;
	first->next = NULL;
	last = *a;
	while (last->next)
		last = last->next;
	last->next = first;
}

void	rb(t_s **b)
{
	t_s	*first;
	t_s	*last;

	if (!b || !*b || !(*b)->next)
		return ;
	first = *b;
	*b = (*b)->next;
	first->next = NULL;
	last = *b;
	while (last->next)
		last = last->next;
	last->next = first;
}

void	rr(t_s **a, t_s **b)
{
	ra(a);
	rb(b);
}

void	rra(t_s **a)
{
	t_s	*last;
	t_s	*tmp;

	if (!a ||!*a || (*a)->next)
		return ;
	last = *a;
	while (last->next->next)
		last = last->next;
	tmp = last->next;
	last->next = NULL;
	tmp->next = *a;
	*a = tmp;
}

void	rrb(t_s **b)
{
	t_s	*last;
	t_s	*tmp;

	if (!b || !*b || !(*b)->next)
		return ;
	last = *b;
	while (last->next->next)
		last = last->next;
	tmp = last->next;
	last->next = NULL;
	tmp->next = *b;
	*b = tmp;
}
