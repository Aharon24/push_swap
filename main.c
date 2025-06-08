/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:14:46 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/07 19:00:16 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc ,char *argv[])
{
    int		i;
	t_arr		set;
	
	i = 0;
	if (argc <= 1)
	{
        ft_printf("Error\n");
        ft_free(set.arr);
        return (0);
	}
	set.arr = ft_get_number(argc, argv,set.arr);
	// if (arr == NULL)
	// {
	// 	ft_printf("Error\n");
	// 	return (0);
	// }

   // ft_cheak_argv(argv);
}

