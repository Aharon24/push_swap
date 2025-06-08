/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:14:46 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/08 21:34:52 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc ,char *argv[])
{
    int		i;
	t_arr	set;
	t_s		n;
	
	i = 0;
	if (argc <= 1)
        return (0);
	if(argc == 2)
	{
		if (ft_check_string(set.arr, argv[1]) == 0)
			return (0);
		if((ft_get_number(argc,argv,set.arr,&n)) == NULL)
		{
			ft_printf("Error\n");
			return(0);
		}
	}
	else if(argc > 2)
	{
		if(ft_check_argv(set.arr, argv) == 0)
			return(0);
		if((set.arr = ft_get_number(argc,argv,set.arr,&n)) == NULL)
		{
			ft_printf("Error\n");
			return(0);
		}
	}
	// if (arr == NULL)
	// {
	// 	ft_printf("Error\n");
	// 	return (0);
	// }

   // ft_cheak_argv(argv);
}

