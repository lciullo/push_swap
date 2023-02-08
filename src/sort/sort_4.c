
#include "../../headers/push_swap.h"

static int	position_of_min(t_list *copy)
{
	int	min_pos;

	min_pos = 0;
	while (copy)
	{
		if (copy->index == 0)
			break;
		copy = copy->next;
		min_pos++;
	}	
	return (min_pos);
}


static	void	reverse_swap(t_list **stack)
{
	int	tmp;

	tmp = (*stack)->next->next->index;
	(*stack)->next->next->index = (*stack)->next->next->next->index;
	(*stack)->next->next->next->index = tmp;
}

void	sort_four(t_list **a, t_list **b)
{
	t_list	*copy_a;
    t_list  *copy_b;
	int		min_pos;

	copy_a = *a;
    copy_b = *b;
	min_pos = position_of_min(copy_a);
	if (min_pos == 0)
	{
		push_b(&copy_b, &copy_a);
		sort_three(&copy_a);
		push_a(&copy_a, &copy_b);
	}
	else if (min_pos == 1)
	{
		swap_a(copy_a);
		push_b(&copy_b, &copy_a);
		sort_three(&copy_a);
		push_a(&copy_a, &copy_b);
	}
	else if (min_pos == 2)
	{
		reverse_swap(&copy_a);
		rvr_a(&copy_a);
		push_b(&copy_b, &copy_a);
		sort_three(&copy_a);
		push_a(&copy_a, &copy_b);
	}
	else if (min_pos == 3)
	{
		rvr_a(&copy_a);
		push_b(&copy_b, &copy_a);
		sort_three(&copy_a);
		push_a(&copy_a, &copy_b);
	}
}