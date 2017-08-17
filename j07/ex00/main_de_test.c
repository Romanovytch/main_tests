/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 11:02:52 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/14 22:12:20 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*ptr;
	char	str[] = "This sentence should be dynamically allocated.";
	char	str1[] = "How much wood would a woodchuck chuck if a woodchuck could chuck wood ?";
	char	str2[] = "";

	ptr = strdup(str);
	printf("Original : %s\n", str);
	printf("Copied string : %s\n", ptr);
	free(ptr);

	ptr = strdup(str1);
	printf("Original : %s\n", str1);
	printf("Copied string : %s\n", ptr);
	free(ptr);

	ptr = strdup(str2);
	printf("Original : %s\n", str2);
	printf("Copied string : %s\n", ptr);
	free(ptr);
return (0);
}
