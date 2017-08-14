/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 12:41:04 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/10 13:30:01 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int main()
{
	char str[] = "Old sentence";
	char str1[] = "New sentence";
	char test2[] = "Shorter Sentence";
	char test[] = "Very too long and annoying sentence";
	char *ret;

	printf("Before : %s\n", str);
	ret = ft_strcpy(str, str1);
	printf("After : %s\n", str);	
	printf("Value returned should be %p : %p\n", str, ret);
	printf("Before : %s\n", test);
	ret = ft_strcpy(test, test2);
	printf("After : %s\n", test);
	printf("Value returned should be %p : %p\n", test, ret);
}
