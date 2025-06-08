/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:18:03 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/08 22:25:58 by ahapetro         ###   ########.fr       */
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




char	**ft_get_number(int argc, char **argv, char **arr,t_s *n);
char	**ft_get_number_in_string(char **arr, char *argv,t_s *n);
char	**ft_argv_get_number(char **arr, char **argv,t_s *n);

/// free 
void	ft_free(char **arr);
void ft_list_free(t_s *n);

///chesk

int		ft_check_string(char **arr, char *argv);
int		ft_check_argv(char **arr,char **argv);
int		ft_strlen_arr(char **arr);
//exit
void	ft_exit(void);


//list
t_s		*ft_new_list(int data);
void	ft_pintf_list(t_s *n);
t_s		*ft_add_list(char **arr,t_s *n, t_arr *srr);

///convert 

int ft_convert(char **arr , t_s *n);
int		ft_check_signed(char **arr);

#endif