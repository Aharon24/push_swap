/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:14:46 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/10 21:16:30 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int		i;
	t_arr	set;
	t_s		n;
	t_s		*n1;

	i = 0;
	if (argc <= 1)
	{
		ft_printf("Error\n");
		ft_printf("aaa");
		return (0);
	}
	if (ft_check_argv(set.arr, argv) == 0)
	{
		ft_printf("Error\n");
		return (0);
	}
	n1 = ft_get_number(argc, argv, set.arr, &n);
	if ((n1 == NULL) || ft_check_dublicate(n1) == 0)
	{
		ft_printf("Err2222or\n");
		return (0);
	}
	ft_push_swap(&n1);
	ft_printf_list(n1);
}
