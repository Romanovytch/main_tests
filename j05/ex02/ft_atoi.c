/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 17:25:51 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/09 17:25:54 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	neg_token;
	int pw;
	int	nb;
	int i;

	i = 0;
	pw = 1;
	neg_token = 1;
	nb = 0;
	while (str[i] >= 1 && str[i] <= 32)
		i = i + 1;
	if (str[i] == '-')
		neg_token = neg_token * -1;
	i++;
	while (str[i] >= '0' && str[i] <= '9')
		i = i + 1;
	i = i - 1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb + (str[i] - '0') * pw;
		pw = pw * 10;
		i = i - 1;
	}
	nb = nb * neg_token;
	return (nb);
}
