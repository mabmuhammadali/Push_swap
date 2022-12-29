/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:47:27 by mabdulla          #+#    #+#             */
/*   Updated: 2022/10/20 15:16:48 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_control(t_list **a, t_list **b)
{
	if (ft_lstsize(*a) == 2)
		ft_rra(a);
	else if (ft_lstsize(*a) == 3)
		ft_three(a);
	else if (ft_lstsize(*a) <= 5)
		ft_five(a, b);
	else if (ft_lstsize(*a) > 5)
		ft_sort(a, b);
}

int	ft_compare(t_list *a)
{
	while (a->next != 0)
	{
		if (ft_atoi(a->content) >= ft_atoi(a->next->content))
			return (0);
		a = a->next;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		i;
	int		true;

	if (argc < 2)
		return (0);
	true = 1;
	a = ft_lstnew((void *)argv[1]);
	b = (t_list *)calloc(1, sizeof(t_list));
	b = 0;
	i = 1;
	while (++i != argc)
		ft_lstadd_back(&a, ft_lstnew((void *)argv[i]));
	true = ft_compare(a);
	if (true == 0)
		ft_control(&a, &b);
	while (a != 0)
	{
		ft_printf("%s\n", a->content);
		a = a->next;
	}
}
