/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabensal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:08:41 by yabensal          #+#    #+#             */
/*   Updated: 2025/07/28 14:52:16 by yabensal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0') && (s1[i] == s2[i]))
		i++;
	if ((s1[i] == s2[i]) || (s2[i] == s1[i]))
	{
		return (0);
	}
	else if ((s1[i] > s2[i]) || (s2[i] < s1[i]))
	{
		return (1);
	}
	else if ((s1[i] < s2[i]) || (s2[i] > s1[i]))
	{
		return (-1);
	}
	return (i);
}
/*
int	main(void)
{
	char *a1 = "hello world";
	char *a2 = "hello world";

	char *b1 = "what is up";
	char *b2 = "WHAT IS UP";

	char *c1 = "How Are You";
	char *c2 = "how are you";

	printf("%s = %s : %d\n", a1, a2, ft_strcmp(a1, a2));
        printf("%s > %s : %d\n", b1, b2, ft_strcmp(b1, b2));
        printf("%s < %s : %d\n", c1, c2, ft_strcmp(c1, c2));

	return (0);
}
*/
