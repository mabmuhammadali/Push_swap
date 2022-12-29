/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:16:52 by mabdulla          #+#    #+#             */
/*   Updated: 2022/10/20 14:34:55 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort2(t_list **b)
{
	t_list	*bcpy;

	bcpy = *b;
	if (ft_lstsize(bcpy) > 1)
	{
		if (ft_atoi(bcpy->next->content) > ft_atoi(bcpy->content)
			&& ft_atoi(bcpy->next->content)
			> ft_atoi(ft_lstlast(bcpy)->content))
			ft_sb(b);
		else if (ft_atoi(ft_lstlast(bcpy)->content)
			> ft_atoi(bcpy->content) && ft_atoi(ft_lstlast(bcpy)->content)
			> ft_atoi(bcpy->next->content))
			ft_rrb(b);
	}
}

static void	ft_sort1(t_list **a)
{
	t_list	*acpy;

	acpy = *a;
	if (ft_lstsize(acpy) > 1)
	{
		if (ft_atoi(acpy->next->content) < ft_atoi(acpy->content)
			&& ft_atoi(acpy->next->content)
			< ft_atoi(ft_lstlast(acpy)->content))
			ft_sa(a);
		else if (ft_atoi(ft_lstlast(acpy)->content)
			< ft_atoi(acpy->content) && ft_atoi(ft_lstlast(acpy)->content)
			< ft_atoi(acpy->next->content))
			ft_rra(a);
	}
}

void	ft_sort(t_list **a, t_list **b)
{
	/*t_list	*acpy;
	t_list	*bcpy;

	acpy = *a;
	while (acpy != 0)
	{
		ft_sort1(a);
		ft_pb(a, b);
		ft_sort2(b);
		acpy = *a;
	}
	bcpy = *b;
	while (bcpy != 0)
	{
		ft_sort2(b);
		ft_pa(a, b);
		ft_sort1(a);
		bcpy = *b;
	}*/
	
}
