/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 18:17:44 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/10 13:47:09 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			ptr = &str[i];
			while (str[i] == to_find[j])
			{
				i = i + 1;
				j = j + 1;
				if (to_find[j] == '\0')
					return (ptr);
			}
		}
		i = i + 1;
	}
	return (NULL);
}
