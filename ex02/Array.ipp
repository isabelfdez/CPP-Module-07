/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.ipp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 23:21:59 by user42            #+#    #+#             */
/*   Updated: 2021/09/19 23:52:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<class T>
Array<T>::Array() : _length(0), _arr(NULL) { }

template<class T>
Array<T>::Array(unsigned int n) : _length(n)
{
	this->_arr = new T[n]();
}

template<class T>
Array<T> &Array<T>::operator=(Array<T> &obj)
{
	int		i = 0;

	Array<T>	*obj2 = new Array<T>(obj._length);
	while (i < obj._length)
	{
		obj2->_arr[i] = obj._arr[i];
		i++;
	}
	return (*obj2);
}

template<class T>
Array<T>::Array(Array<T> &obj) { *this = obj; }

template<class T>
Array<T>::~Array() { }

template<class T>
T &Array<T>::operator[](int index)
{
	if (index >= _length)
		throw OutOfRange();
	else
		return (this->_arr[index]);
}

template<class T>
const char* Array<T>::OutOfRange::what() const throw()
{
	return ("Index is out of range");
}


