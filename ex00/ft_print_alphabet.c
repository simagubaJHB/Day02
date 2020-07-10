/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simaguba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:19:08 by simaguba          #+#    #+#             */
/*   Updated: 2020/07/10 08:41:28 by simaguba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_print_alphabet(void) 
{ 
	char letter;
	letter = 'a';
	while (letter <='z')
	{	
 		ft_putchar(letter);
  		 letter++; 
    }
}
int main(void) {

	ft_print_alphabet();
	return(0);
}
