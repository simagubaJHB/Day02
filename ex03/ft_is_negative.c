/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simaguba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 14:58:41 by simaguba          #+#    #+#             */
/*   Updated: 2020/07/10 15:24:58 by simaguba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
  write(1, &c, 1);
}

void    ft_is_negative(int n)
{
  if (n >= 0)
  {
    ft_putchar('P');
  }
  else
  {
    ft_putchar('N');
  }
}

int main(void)
{
  ft_is_negative(2);
  ft_is_negative(-2);
}
