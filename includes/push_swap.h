/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:56:44 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/30 01:50:21 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* ########################################################################## */
/* INCLUDE */
/* ####### */

# include "ft_printf.h"
# include "libft.h"
# include <stdlib.h>

/* ########################################################################## */

/* ########################################################################## */
/* DEFINE */
/* ###### */

# ifndef DEBUG
#  define DEBUG 0
# endif

# define MAX_INT 2147483647
# define MIN_INT -2147483648

/* ########################################################################## */

/* ########################################################################## */
/* STRUCT */
/* ###### */

typedef struct s_stack
{
	struct s_stack	*next;
	struct s_stack	*prev;
	int				value;
	int				index;
}				t_stack;

typedef struct s_push_swap
{
	t_stack	*a;
	t_stack	*b;
	int		is_stack_b_empty;
	int		is_stack_a_empty;
}				t_push_swap;

/* ########################################################################## */

/* ########################################################################## */
/* FILES */
/* ##### */

// algo/algo_2.c
void		algo_2(t_push_swap *ps);

// algo/algo_3.c
void		algo_3(t_push_swap *ps);

// algo/algo_5.c
void		algo_5(t_push_swap *ps);

// algo/algo_utils.c
int			is_sorted(t_push_swap *ps);
int			is_r_sorted_b(t_push_swap *ps);
int			get_less_significant(t_stack *s);
int			get_most_significant(t_stack *s);

// ope/pa.c
void		pa(t_push_swap *ps);
void		post_pa(t_push_swap *ps);

// ope/pb.c
void		pb(t_push_swap *ps);
void		post_pb(t_push_swap *ps);

// ope/ra.c
void		ra(t_push_swap *ps, int is_rrr);
void		post_ra(t_push_swap *ps);

// ope/rb.c
void		rb(t_push_swap *ps, int is_rrr);
void		post_rb(t_push_swap *ps);

// ope/rra.c
void		rra(t_push_swap *ps, int is_rr);
void		post_rra(t_push_swap *ps);

// ope/rrb.c
void		rrb(t_push_swap *ps, int is_rr);
void		post_rrb(t_push_swap *ps);

// ope/rr.c
void		rr(t_push_swap *ps);

// ope/rrr.c
void		rrr(t_push_swap *ps);

// ope/sa.c
void		sa(t_push_swap *ps, int is_ss);
void		post_sa(t_push_swap *ps);

// ope/sb.c
void		sb(t_push_swap *ps, int is_ss);
void		post_sb(t_push_swap *ps);

// ope/ss.c
void		ss(t_push_swap *ps);

// parsing/parse.c
t_stack		*parse_multiple_string(char **argv, int argc);
t_stack		*parse_one_string(char *argv);
t_stack		*parse(int argc, char **argv);

// parsing/parse_check.2.c
int			parse_check_one_string_part2(char **tmp_list, int number_arg, \
long int *number);
int			parse_check_multiple_string_part2(char **tmp_list, int number_arg, \
long int *number);

// parsing/parse_check.c
int			parse_check_is_str_numeric(const char *str);
long int	parse_check_one_is_good_number(char **tmp_list, int i, \
long int *number);
long int	parse_check_multiple_is_good_number(char **tmp_list, int i, \
long int *number);
int			parse_check_one_string(char *argv);
int			parse_check_multiple_string(char **argv, int argc);

// push_swap.c
int			main(int argc, char **argv);

// stack/stack_free.c
void		stack_free(t_stack *s);
void		free_entry_point(t_push_swap *ps);

// stack/stack_utils.2.c
int			stack_get_value_at_index(t_stack *s, int index);
int			stack_get_size(t_stack *s);
void		stack_view(t_push_swap *ps);
void		stack_view_a(t_push_swap *ps);
void		stack_view_b(t_push_swap *ps);

// stack/stack_utils.3.c
int			stack_get_value_at_top(t_stack *s);
int			stack_get_value_before_top(t_stack *s);
void		stack_pop_top_b(t_push_swap *ps);
void		stack_pop_top_a(t_push_swap *ps);
void		stack_arrange_index(t_stack *s);

// stack/stack_utils.c
t_stack		*stack_new(int content, int index);
void		stack_new_b(int content, int index, t_push_swap *ps);
void		stack_new_a(int content, int index, t_push_swap *ps);
void		stack_push_top(t_stack *s, int value);
t_stack		*stack_push_bottom(t_stack *s, int value);

/* ########################################################################## */

#endif
