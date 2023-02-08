

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

static int  get_highest_shift(t_list **a)
{
    int max;
    int shift;

    max = get_max_index(a);
    shift = 0;
    while (max >> shift != 0)
        shift++;
    return (shift);
}

void radix_sort(t_list **a, t_list **b, t_stack *len) 
{
    int max_shift;
    int i;
    int j;
    t_list *head;
  
    max_shift = get_highest_shift(a);
    i = 0;
    head = *a;
    while (i < max_shift)//|| is_sorted(a) == 1 ? voir si on peut raccoursir demain
    {
        j = 0;
        while (j != len->stack_a)
        {
            head = *a;
            if ((head->index >> i) % 2 == 1)
            {
                rotate(a);
            }
            else
                push_b(b, a);
            j++;
            ft_printf("j %d\n", j);
        }
        while (ft_lstsize(*b) != 0)
			push_a(a, b);
        i++;
        ft_printf("i %d\n", i);
    }
}