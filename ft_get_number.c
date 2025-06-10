/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 17:15:12 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/10 17:35:48 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_s	*ft_get_number(int argc, char **argv, char **arr, t_s *n)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		n = ft_get_number_in_string(arr, argv[1], n);
		if (n == NULL)
			return (NULL);
		return (n);
	}
	else if (argc > 2)
	{
		n = ft_argv_get_number(arr, argv, n);
		if (n == NULL)
			return (NULL);
	}
	return (n);
}

t_s	*ft_get_number_in_string(char **arr, char *argv, t_s *n)
{
	int	i;

	i = 0;
	arr = ft_split(argv, ' ');
	///free
	n = ft_convert(arr, n);
	if (n == NULL)
		return (NULL);
	else
		return (n);
}

t_s	*ft_argv_get_number(char **arr, char **argv, t_s *n)
{
	int		index ;
	char	**arr_red;
	t_arr	srr;
	t_s		*p;

	p = NULL;
	index = 1;
	while (argv[index])
	{
		arr_red = ft_split(argv[index], ' ');
		if (ft_check_signed(arr_red) == 0)
			return (NULL);
		if (ft_strlen_arr(arr_red) == 0) ///free
			return (NULL);
		p = ft_add_list(arr_red, p, &srr);
		free(arr_red);
		index++;
	}
	n = p;
	return (n);
}
