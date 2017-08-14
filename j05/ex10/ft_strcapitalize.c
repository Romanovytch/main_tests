/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 21:18:33 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/10 15:00:57 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alphanum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') 
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		while (is_alphanum(str[i]) == 0)
			i = i + 1;
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		while (is_alphanum(str[i]) == 1)
			i = i + 1;
	}
	return (str);
}
