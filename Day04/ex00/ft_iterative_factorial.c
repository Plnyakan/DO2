/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plnyakan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:28:24 by plnyakan          #+#    #+#             */
/*   Updated: 2020/07/14 12:28:56 by plnyakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb){

	int m;
	int p;

	while(m<nb){

		p=p*m;
		m++;
	}

	return nb;
}


int main(){

	return 0;
}
