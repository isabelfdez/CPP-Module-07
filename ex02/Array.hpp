/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 22:56:08 by user42            #+#    #+#             */
/*   Updated: 2021/09/19 23:34:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

template <class T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(Array &obj);
		~Array();
		
		Array&	operator=(Array &obj);
		T&		operator[](int index);

		class OutOfRange : public std::exception
		{
			public:
				const char*	what() const throw();
		};
	
	private:
		T		*_arr;
		int		_length;
};

# include "Array.ipp"

#endif