/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 18:00:17 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/09 15:35:41 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


t_s	*ft_convert(char **arr , t_s *n)
{
	int i;
	t_s *p = NULL;
	t_s *p1;
	t_arr srr;
	
	i = 0;
	if (ft_check_signed(arr) == 0)
		return (NULL);
	 
	if(ft_strlen(arr[i]) > 11)///free 11 12
		return(NULL);
	if(!p)
		p  = ft_new_list(ft_atoi(arr[i],&srr));
	if(srr.check == 1)
	{
			///ft_list_free(n);???
		return(NULL);
	}	
	i++;
	n = p;
	while(arr[i])
	{
		if(ft_strlen(arr[i]) > 11)
		{
			//////ft_list_free(n);?????
			return(NULL);
		}
		p1 = ft_new_list(ft_atoi(arr[i], &srr));
		if(srr.check == 1)
		{
			///ft_list_free(n);???
			return(NULL);
		}
		p->next = p1;
		p = p->next;
		i++;
	}
	return(n);
}

