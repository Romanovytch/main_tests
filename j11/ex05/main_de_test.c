#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

int	main(int argc, char **argv)
{
	t_list	*list;

	list = NULL;
	list = ft_list_push_params(argc, argv);
	while (list != NULL)
	{
		printf("%s\n", (char*)list->data);
		list = list->next;
	}	
	return (0);
}
