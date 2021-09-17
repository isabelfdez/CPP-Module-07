/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 12:19:28 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/17 14:35:14 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

class   Example 
{
    public:
        Example(int n) : _n( n ) { }
	
        int		getN() const;
		void	setN(int n);

        bool	operator==( Example const & rhs )	const;
        bool	operator!=( Example const & rhs )	const;
        bool	operator>( Example const & rhs )	const;
        bool	operator<( Example const & rhs )	const;
        bool	operator>=( Example const & rhs )	const;
        bool	operator<=( Example const & rhs )	const;
    
	private:
        int		_n;
};

std::ostream &operator<<(std::ostream &os, Example const &a);


template <typename T>
void    swap(T &a, T &b)
{
	T   aux;
	
	aux = a;
	a = b;
	b = aux;
}

template <> void	swap<Example>(Example &a, Example &b);

template <typename T>
T &		min(T &a, T &b) { return (a <= b ? a : b); }

template <typename T>
T &		max(T &a, T &b) { return (a >= b ? a : b); }

#endif
