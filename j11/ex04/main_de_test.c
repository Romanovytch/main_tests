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

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;
	t_list	*list;

	list = *begin_list;
	if (*begin_list == NULL)
	{
		new = ft_create_elem(data);
		(*begin_list) = new;
	}
	else
	{
		while (list->next != NULL)
			list = list->next;
		new = ft_create_elem(data);
		list->next = new;
	}
}

int	main()
{
	t_list	*list;
	t_list	*tmp;

	list = NULL;
	tmp = list;
	printf("~~~~ Creating empty list, pointing to NULL. ~~~~\n");
	printf("Last elem should be null :\n");
	if (ft_list_last(list) == NULL)
		printf("Ok\n");
	else
		printf("Failure.\n");
	printf("Push back 1 data :\n");
	ft_list_push_back(&list, "Tyrion\n");
	tmp = ft_list_last(list);
	printf("Last elem should be Tyrion : %s", tmp->data);
	ft_list_push_back(&list, "Cersei\n");
	ft_list_push_back(&list, "Jaime\n");
	ft_list_push_back(&list, "Jon Snow\n");
	tmp = ft_list_last(list);
	printf("Last elem should be Jon Snow : %s", tmp->data);
	return (0);
}
