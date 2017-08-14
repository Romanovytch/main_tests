/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 19:08:00 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/10 14:16:28 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] == s2[j])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		j = j + 1;
		i = i + 1;
	}
	if (s1[i] > s2[j])
		return (1);
	else
		return (0);
}
