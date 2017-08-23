#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

int	main()
{
	t_list	*list;
	t_list	*tmp;

	list = NULL;
	tmp = list;
	printf("~~~~ Creating empty list, pointing to NULL. ~~~~\n");
	
	printf("Trying on empty list :\n");
	ft_list_clear(&list);
	if (list == NULL)
		printf("Ok\n");
	else
	{
		printf("Failure.\n");
		return (0);
	}
	printf("\n~~ Push front 1 data ~~\n");
	printf("Attempts clearing list :\n");
	ft_list_clear(&list);
	if (list == NULL)
		printf("Ok\n");
	else
	{
		printf("Failure.\n");
		return (0);
	}
	printf("\n~~ Push front 4 datas ~~\n");
	ft_list_push_front(&list, "toto\n");
	ft_list_push_front(&list, "titi\n");
	ft_list_push_front(&list, "tata\n");
	ft_list_push_front(&list, "tutu\n");
	printf("Attempts clearing list :\n");
	ft_list_clear(&list);
	if (list == NULL)
		printf("Ok\n");
	else
	{
		printf("Failure.\n");
		return (0);
	}
	tmp = malloc(1024);
	return (0);
}
