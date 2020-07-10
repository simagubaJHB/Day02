/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simaguba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:01:52 by simaguba          #+#    #+#             */
/*   Updated: 2020/07/10 09:36:14 by simaguba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void ft_putchar(char c) 
{
	write(1,&c,1);
} 
void ft_print_reverse_alphabet(void)
{	
	char letter;
	letter = 'z';
	while (letter >='a')
	{
		ft_putchar(letter);
		letter--;
	}	
} 
int main (void) 
{
	ft_print_reverse_alphabet (); 
		return 0;
}
