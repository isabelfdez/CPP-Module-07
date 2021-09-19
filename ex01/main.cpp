/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 14:37:21 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/19 22:55:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int		main()
{
	int		a[5] = { 0, 1, 2, 3, 4 };
	int		i = 0;

	std::cout << "Original array: ";
	while (i < 5)
	{
		std::cout << a[i] << ' ';
		i++;	
	}
	std::cout << '\n';
	iter<int>(a, 5, &ft_add);
	std::cout << "ft_add: ";
	i = 0;
	while (i < 5)
	{
		std::cout << a[i] << ' ';
		i++;	
	}
	std::cout << '\n';
	std::cout << "my_func: ";
	iter<int>(a, 5, &(my_func<int>));
	i = 0;
	while (i < 5)
	{
		std::cout << a[i] << ' ';
		i++;	
	}
	std::cout << "\n\n";
	
	char b[3] = { 'A', 'S', 'd' };
	std::cout << "Original array: ";
	i = 0;
	while (i < 3)
	{
		std::cout << b[i] << ' ';
		i++;	
	}
	std::cout << '\n';
	std::cout << "my_func: ";
	iter<char>(b, 3, &(my_func<char>));
	i = 0;
	while (i < 3)
	{
		std::cout << b[i] << ' ';
		i++;	
	}
	std::cout << '\n';
	
}
