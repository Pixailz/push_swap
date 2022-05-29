/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:57:29 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/29 17:51:33 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_push_swap	ps;

	if (argc < 2)
		ft_error("not enought args");
	ps.a = parse(argc, argv);
	ps.is_stack_a_empty = 0;
	ps.is_stack_b_empty = 1;
	if (DEBUG)
		stack_view(&ps);
	algo_5(&ps);
	if (DEBUG)
		stack_view(&ps);
	free_entry_point(&ps);
	return (0);
}
