/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 17:15:12 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/07 19:33:51 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


char **ft_get_number(int argc, char **argv, char **arr)
{
	int		i;

	i = 0;
	if(argc == 2)
	{
        arr = ft_get_number_in_string(arr, argv[1]);
		if (ft_check_string(arr) == 0)
			return (NULL);
		
	}
	else if(argc > 2)
	{
		if (ft_check_string(argv) == 0)
			return (NULL);
		arr = ft_argv_get_number(arr, argv);
	}
	return(arr);
}

char	**ft_get_number_in_string(char **arr, char *argv)
{
    int		i;
	char	**arr_red;

	i = 0;
	while (argv[i])
	{
		
	}
	
	arr = ft_split(argv,' ');
	return(arr);
}


char **ft_argv_get_number(char **arr, char **argv)
{
	int	i;

	arr = NULL;
	i = 0;
	ft_printf("\n[1] %s\n",argv[1]);
	return(arr);
}