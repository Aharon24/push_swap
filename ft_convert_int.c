/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 18:00:17 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/08 21:51:29 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	ft_convert(char **arr , t_s *n)
{
	int i;
	t_s *p;
	t_s *p1;
	t_arr srr;
	
	i = 0;
	if (ft_check_signed(arr) == 0)
		return (0);
	 
	if(ft_strlen(arr[i]) > 11)///free 11 12
		return(0);
	n->data = ft_atoi(arr[i],&srr);
	if(n->data > 2147483647 || n->data < -2147483648)
		return(0);
	i++;
	p = n;
	while(arr[i])
	{
		if(ft_strlen(arr[i]) > 11)
		{
			//////ft_list_free(n);?????
			return(0);
		}
		p1 = ft_new_list(ft_atoi(arr[i], &srr));
		if(srr.check == 1)
		{
			///ft_list_free(n);???
			return(0);
		}
		p->next = p1;
		p = p->next;
		i++;
	}
	while(n)
	{
		ft_printf("list %d -> ",n->data);
		n = n->next;
	}
	ft_printf("->NULL");
	
	return(1);
}

