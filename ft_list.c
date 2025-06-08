/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 16:08:07 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/08 21:58:32 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_s	*ft_new_list(int data)
{
	t_s	*new_node;

	new_node = (t_s *)malloc(sizeof(t_s));
	if (!new_node)
		return (NULL);
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

void ft_pintf_list(t_s *n)
{
	t_s *temp;

	temp = n;
	while (temp)
	{
		ft_printf("%d -> ", temp->data);
		temp = temp->next;
	}
	ft_printf("NULL\n");
}
