/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:18:03 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/07 18:59:21 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

#include "ft_printf/ft_printf.h"
#include <stdlib.h>
#include "Libft/libft.h"

typedef struct s
{
	int			data;
	struct s*	next;
}	t_s;

typedef struct arr
{
	char **arr;
}	t_arr;


char	**ft_get_number(int argc, char **argv, char **arr);
char	**ft_get_number_in_string(char **arr, char *argv);
char	**ft_argv_get_number(char **arr, char **argv);
void	ft_free(char **arr);
int		ft_check_string(char **arr);
void	ft_exit(void);

#endif