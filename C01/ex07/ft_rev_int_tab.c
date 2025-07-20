/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabensal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:13:30 by yabensal          #+#    #+#             */
/*   Updated: 2025/07/17 15:59:03 by yabensal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	di;
	int	swap;

	i = 0;
	di = size - 1;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[di];
		tab[di] = swap;
		i++;
		di--;
	}
}
/*
int	main(void)
{
	int	i;
	int	size = 5;
	int	tab[5] = {1, 2, 3, 4, 5};

	ft_rev_int_tab(tab, size);
	
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}
*/
