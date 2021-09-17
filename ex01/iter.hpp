/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 14:37:23 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/17 23:05:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

void	ft_add(int &x);

template <typename T>
void    iter(T a[], int lenght, void (*f)(T &x))
{
	int	aux = 0;

	while (aux < lenght)
	{
		f(a[aux]);
		std::cout << a[aux] << ' ';
		aux++;
	}
	std::cout << '\n';
}

#endif