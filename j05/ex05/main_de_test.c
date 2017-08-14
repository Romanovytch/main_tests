/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 18:28:56 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/12 10:20:03 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str[] = "Unicorns have a great sense of humour.";
	char little[] = "sense";
	char little2[] = "co";
	char little3[] = "a";
	char little4[] = "hello world";
	char *ptr;

	ptr = strstr(str, little);
	if (ptr == NULL)
		printf("The little string was nowhere to be found in the big one.\n");
	else
		printf("Found : %s\n", ptr);
	ptr = ft_strstr(str, little);
	if (ptr == NULL)
		printf("The little string was nowhere to be found in the big one.\n");
	else
		printf("Found : %s\n", ptr);
	ptr = ft_strstr(str, little2);
	if (ptr == NULL)
		printf("The little string was nowhere to be found in the big one.\n");
	else
		printf("Found : %s\n", ptr);
	ptr = ft_strstr(str, little3);
	if (ptr == NULL)
		printf("The little string was nowhere to be found in the big one.\n");
	else
		printf("Found : %s\n", ptr);
	ptr = ft_strstr(str, little4);
	if (ptr == NULL)
		printf("The little string was nowhere to be found in the big one.\n");
	else
		printf("Found : %s\n", ptr);
	return (0);
}
