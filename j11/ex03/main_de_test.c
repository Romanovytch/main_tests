#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*new;

	new = (t_list*)malloc(sizeof(t_list));
	if (new != NULL)
	{
		new->data = data;
		new->next = NULL;
	}
	return (new);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	if (*begin_list == NULL)
	{
		new = ft_create_elem(data);
		(*begin_list) = new;
	}
	else
	{
		new = ft_create_elem(data);
		new->next = *begin_list;
		*begin_list = new;
	}
}

int	main()
{
	t_list	*list;
	t_list	*tmp;
	int		size;

	size = 0;
	list = NULL;
	ft_list_push_front(&list, "toto\n");
	tmp = list;
	printf("~~~~ Creating empty list, pointing to NULL. ~~~~\n");
	size = ft_list_size(list);
	printf("Size : %d\n\n", size);
	printf("Push front 1 data (total 1) :\n");
	ft_list_push_front(&list, "titi\n");
	size = ft_list_size(list);
	printf("Size : %d\n\n", size);
	printf("Push front 9 data (total 10) :\n");
	ft_list_push_front(&list, "tata\n");
	ft_list_push_front(&list, "tutu\n");
	ft_list_push_front(&list, "tata\n");
	ft_list_push_front(&list, "tutu\n");
	ft_list_push_front(&list, "tata\n");
	ft_list_push_front(&list, "tutu\n");
	ft_list_push_front(&list, "tata\n");
	ft_list_push_front(&list, "tutu\n");
	ft_list_push_front(&list, "titi\n");
	size = ft_list_size(list);
	printf("Size : %d\n\n", size);
	return (0);
}
