/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 12:19:26 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/17 14:36:21 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main()
{
	int		i = 0, j = 2;
	std::cout << "i = " << i << " ";
	std::cout << "j = " << j << '\n';
	std::cout << "swap" << '\n';
	swap<int>(i, j);
	std::cout << "i = " << i << " ";
	std::cout << "j = " << j << "\n\n";

	float	x = 14.65f, y = 34341.02391f;
	std::cout << "x = " << x << " ";
	std::cout << "y = " << y << '\n';
	swap<float>(x, y);
	std::cout << "x = " << x << " ";
	std::cout << "y = " << y << "\n\n";

	std::cout << "i = " << i << " ";
	std::cout << "j = " << j << '\n';
	std::cout << "min = " << min<int>(i, j) << '\n';
	std::cout << "max = " << max<int>(i, j) << "\n\n";
	std::cout << "x = " << x << " ";
	std::cout << "y = " << y << '\n';
	std::cout << "min = " << min<float>(x, y) << '\n';
	std::cout << "max = " << max<float>(x, y) << "\n\n";

	Example		obj1(91);
	Example		obj2(124);
	
	std::cout << "obj1 = " << obj1 << " ";
	std::cout << "obj2 = " << obj2 << '\n';
	std::cout << "min = " << min<Example>(obj1, obj2) << '\n';
	std::cout << "max = " << max<Example>(obj1, obj2) << "\n\n";
	std::cout << "swap" << '\n';
	swap(obj1, obj2);
	std::cout << "obj1 = " << obj1 << " ";
	std::cout << "obj2 = " << obj2 << "\n\n";

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
