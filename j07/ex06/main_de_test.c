/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 12:44:09 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/15 15:55:32 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main()
{
	char *str;

	str = ft_convert_base("7F157081", "0123456789ABCDEF", "01");
	printf("Trying 7F157081 base 16 to base 02 : %s, expected 1111111000101010111000010000001\n", str);
	free(str);
	str = ft_convert_base("-20223221100310", "0123", "0123456789ABC");
	printf("Trying -20223221100310 base 04 to base 13 : %s, expected -2423C023\n", str);
	free(str);
	str = ft_convert_base("553032005531", "012345", "01234567");
	printf("Trying 553032005531 base 06 to base 08 : %s, expected 17777777777\n", str);
	free(str);
	str = ft_convert_base("-4BB2308A8", "0123456789AB", "012345678");
	printf("Trying -4BB2308A8 base 12 to base 09 : %s, expected -5478773672\n", str);
	free(str);
return (0);
}
