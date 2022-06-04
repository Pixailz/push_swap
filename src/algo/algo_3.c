/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:03:06 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/04 14:40:07 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_3(t_push_swap *ps)
{
	if (!is_sorted(ps->a))
	{
		if (ps->a->index == 2)
		{
			if (ps->a->next->index == 0)
				rra(ps, 0);
			else
			{
				sa(ps, 0);
				rra(ps, 0);
			}
		}
		else if (ps->a->index == 1)
		{
			if (ps->a->next->index == 2)
				ra(ps, 0);
			else
			{
				rra(ps, 0);
				sa(ps, 0);
			}
		}
		else
			sa(ps, 0);
	}
}
