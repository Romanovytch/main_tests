#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

int	main()
{
	t_list	*list;

	list = NULL;
	list = ft_create_elem("toto\n");
	while (list != NULL)
	{
		printf("%s\n", (char*)list->data);
		list = list->next;
	}	
	return (0);
}
