/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 12:41:04 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/10 13:35:15 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char str[] = "Old sentence";
	char str1[] = "New one.";
	char test2[] = "Shorter Sentence";
	char test[] = "Very too long and annoying sentence";
	char *ret;

	printf("Before : %s\n", str);
	ret = strncpy(str, str1, 3);
	printf("After : %s\n", str);	
	printf("Value returned should be %p : %p\n", str, ret);
	printf("Before : %s\n", test);
	ret = strncpy(test, test2, 16);
	printf("After : %s\n", test);
	printf("Value returned should be %p : %p\n", test, ret);
}
