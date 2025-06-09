/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:18:03 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/09 19:18:58 by ahapetro         ###   ########.fr       */
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




t_s		*ft_get_number(int argc, char **argv, char **arr,t_s *n);
t_s		*ft_get_number_in_string(char **arr, char *argv,t_s *n);
t_s		*ft_argv_get_number(char **arr, char **argv,t_s *n);

/// free 
void	ft_free(char **arr);
void ft_list_free(t_s *n);

///chesk

int		ft_check_string(char **arr, char *argv);
int		ft_check_argv(char **arr, char **argv);
int		ft_strlen_arr(char **arr);
int		ft_check_dublicate(t_s *n);
//exit
void	ft_exit(void);
//list
t_s		*ft_new_list(int data);
void	ft_printf_list(t_s *n);
t_s		*ft_add_list(char **arr,t_s *p, t_arr *srr);
int		ft_list_len(t_s *n);

///convert 

t_s		*ft_convert(char **arr, t_s *n);
int		ft_check_signed(char **arr);

//Sort

void	ft_push_swap(t_s **a);
void	ft_sort_3(t_s **a);

//f
void	sa(t_s **a);
void	sb(t_s **b);
void	ss(t_s **a, t_s **b);
void	pa(t_s **a, t_s **b);
void	pb(t_s **a, t_s **b);

//f2

void	ra(t_s **a);
void	rb(t_s **b);
void	rr(t_s **a , t_s **b);
void	rra(t_s **a);
void	rrb(t_s **b);

//f3
void	rrr(t_s **a ,t_s **b);

#endif