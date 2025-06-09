/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 17:15:12 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/08 22:26:59 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


char **ft_get_number(int argc, char **argv, char **arr,t_s *n)
{
	int		i;

	i = 0;
	if (argc == 2)
	{
        arr = ft_get_number_in_string(arr, argv[1],n);
		if (arr == NULL)
			return (NULL);
	}
	else if (argc > 2)
	{
		arr = ft_argv_get_number(arr, argv,n);
	}
	return (arr);
}

char	**ft_get_number_in_string(char **arr, char *argv,t_s *n)
{
    int	i;

	i = 0;
	arr = ft_split(argv,' ');
    ///free
    if(ft_convert(arr, n) == 0)
        return (NULL);
    else
	    return (arr);
}


char **ft_argv_get_number(char **arr, char **argv, t_s *n)
{
	int	i;
	int j;
	int index ;
	char **arr_red;
	t_s		*start;
	t_arr 	srr;
	t_s		*p;
	t_s		*p1;

	i = 0;
	j = 0;
	start = n;
	index = 1;
	
	while(argv[index])
	{
		i = 0;

		arr_red = ft_split(argv[index], ' ');
		if (ft_check_signed(arr_red) == 0)
			return (NULL);
		// if(ft_strlen_arr(arr_red) == 0)///free
		// 	return (NULL);
		// if(!p)
		// {
		// 	ft_printf("1");
		// 	n->data = ft_atoi(arr_red[i],&srr);
		// 	if(n->data > 2147483647 || n->data < -2147483648)
		// 		return(NULL);
		// 	p = n;
		// }
		i++;
		//ft_add_list(arr_red,n,&srr);
		//ft_free(arr_red);
		index++;
	}
	//ft_pintf_list(n);
	// // while(arr[i])
	// // {
	// // 	ft_printf("%s",arr[i]);
	// // 	i++;
	// // }
	return(arr);
}


t_s *ft_add_list(char **arr,t_s *n, t_arr *srr)
{
	int	i;
	t_s *run;
	t_s *kub;

	run = n;
	i = 0;
	
	while(run)
	{
		run =  run->next;
		///ft_printf("2\n");
	}
	while(arr[i])
	{
		kub = ft_new_list(ft_atoi(arr[i], srr));
		if(srr->check == 1)
			return(NULL);
		run->next = kub;
		run = run->next;
		i++;
	}
	return (n);
}