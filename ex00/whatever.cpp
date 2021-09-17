/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 13:14:38 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/17 14:35:02 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "whatever.hpp"

bool	        Example::operator==( Example const & rhs )	const { return (this->_n == rhs._n); }
bool	        Example::operator!=( Example const & rhs )	const { return (this->_n != rhs._n); }
bool	        Example::operator>( Example const & rhs )	const { return (this->_n > rhs._n); }
bool	        Example::operator<( Example const & rhs )	const { return (this->_n < rhs._n); }
bool	        Example::operator>=( Example const & rhs )	const { return (this->_n >= rhs._n); }
bool	        Example::operator<=( Example const & rhs )	const { return (this->_n <= rhs._n); }

int		        Example::getN() const	{ return this->_n; };
void	        Example::setN(int n)			{ this->_n = n; }

std::ostream    &operator<<(std::ostream &os, Example const &a) { os << a.getN(); return os; }

template <>
void	swap<Example>(Example &a, Example &b)
{
	int		n = a.getN();
	
	a.setN(b.getN());
	b.setN(n);
}
