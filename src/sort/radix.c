

#include "../../headers/push_swap.h"

static int get_max_index(t_list **a) 
{
    t_list        *head;
    unsigned int  max;

    head = *a;
    max = head->index;
    while (head)
    {
        if (head->index > max)
            max = head->index;
        head = head->next;
    }
    return (max);
}

void radix_sort(t_list **a, t_list **b, t_stack *len) 
{
    int max;
    int i;
    int j;
    t_list *head;
  
    max = get_max_index(a);
    i = 0;
    head = *a;
    while (i < max)
    {
        j = 0;
        while (j < len->stack_a)
        {
            head = *a;
            if ((head->index >> i) % 2 == 1)
            {
                rotate(a);
            }
            else
                push_b(b, a);
            j++;
        }
        while (ft_lstsize(*b) != 0)
			push_a(a, b);
        i++;
    }
}