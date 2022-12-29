/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_five.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:10:48 by mabdulla          #+#    #+#             */
/*   Updated: 2022/10/19 10:40:11 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_five2(t_list **a)
{
	t_list	*acpy;

	acpy = *a;
	while (acpy->next != 0)
	{
		if (ft_atoi(acpy->content) > ft_atoi(acpy->next->content))
			ft_sa(&acpy);
		acpy = acpy->next;
	}
}

static void	ft_five1(t_list **a)
{
	t_list	*acpy;
	int		large;
	int		first;
	int		len;

	acpy = *a;
	large = 1;
	first = ft_atoi(acpy->content);
	len = ft_lstsize(acpy);
	acpy = acpy->next;
	while (acpy != 0)
	{
		if (first > ft_atoi(acpy->content))
			large++;
		acpy = acpy->next;
	}
	if (large == len)
		ft_ra(a);
	else
		ft_five2(a);
}

void	ft_five(t_list **a, t_list **b)
{
	while (ft_lstsize(*a) != 3)
		ft_pb(a, b);
	ft_three(a);
	while (ft_lstsize(*b) != 0)
	{
		ft_pa(a, b);
		ft_five1(a);
	}
}
