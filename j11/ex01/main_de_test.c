#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

int	main()
{
	t_list	*list;
	t_list	*tmp;

	list = NULL;
	ft_list_push_back(&list, "toto\n");
	tmp = list;
	printf("~~~~ Creating empty list, pointing to NULL. ~~~~\n");
	printf("Push back 1 data :\n");
	while (list != NULL)
	{
		printf("%s", (char*)list->data);
		list = list->next;
	}
	list = tmp;
	ft_list_push_back(&list, "titi\n");
	ft_list_push_back(&list, "tata\n");
	ft_list_push_back(&list, "tutu\n");
	printf("Push back 3 datas :\n");
	while (list != NULL)
	{
		printf("%s", (char*)list->data);
		list = list->next;
	}
	return (0);
}
