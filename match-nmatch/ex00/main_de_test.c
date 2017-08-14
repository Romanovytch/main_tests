/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 14:50:28 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/14 15:00:15 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	match(char *s1, char *s2);

int	main()
{
	char s1[] = "abc*dedfdg";
	char s2[] = "*ab*dg*";

	printf("Test 1 :\n");
	if (match("abc*dedfdg", "*ab*dg*") == 1)
		printf("Ok.\n");
	else
	{
		printf("Failure.\n");
		return (0);
	}
	if (match("hello", "") == 1)
		printf("Ok.\n");
	else
	{
		printf("Failure.\n");
		return (0);
	}
	if (match("THIS IS A TEST", "*") == 1)
		printf("Ok.\n");
	else
	{
		printf("Failure.\n");
		return (0);
	}

	if (match("*    this is a \ntes test ** ", "*s is*test*") == 1)
		printf("Ok.\n");
	else
	{
		printf("Failure.\n");
		return (0);
	}

	if (match("", "***") == 1)
		printf("Ok.\n");
	else
	{
		printf("Failure.\n");
		return (0);
	}
	if (match("$1681541\t\r\n\f	      klp^*((*&^$^&*", "*1\t***^&*") == 1)
		printf("Ok.\n");
	else
	{
		printf("Failure.\n");
		return (0);
	}
	if (match("poop", "*ooo*") == 0)
		printf("Ok.\n");
	else
	{
		printf("Failure.\n");
		return (0);
	}
	if (match("$1681541\t\r\n\f	      klp^*((*&^$^&*", "*1\t***^&") == 0)
		printf("Ok.\n");
	else
	{
		printf("Failure.\n");
		return (0);
	}
}
