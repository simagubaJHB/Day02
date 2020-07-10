/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simaguba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 10:36:44 by simaguba          #+#    #+#             */
/*   Updated: 2020/07/10 12:04:32 by simaguba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}	  
void ft_print_numbers(void)
{
	char numbers;
	numbers ='0';
	while (numbers <='9')	 
	{ 
		ft_putchar(numbers);
		numbers++;  
	}
   ft_putchar('\n');	
}
int main (void)
{
	ft_print_numbers();
	return 0;
}
