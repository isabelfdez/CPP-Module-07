/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.ipp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 23:21:59 by user42            #+#    #+#             */
/*   Updated: 2021/09/20 17:39:12 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<class T>
Array<T>::Array() : _length(0) { }

template<class T>
Array<T>::Array(unsigned int n) : _length(n)
{
	this->_arr = new T[n];
}

template<class T>
Array<T> &Array<T>::operator=(Array<T> &obj)
{
	if (this->_length > 0)
		delete[] this->_arr;
	this->_arr = NULL;
	if (obj._length > 0)
	{
		this->_arr = new T[obj._length];
		for (int i = 0; i < obj._length; i++)
			this->_arr[i] = obj._arr[i];
	}
	this->_length = obj._length;
	return (*this);
}

template<class T>
Array<T>::Array(Array<T> &obj)
{ 
	this->_length = 0;
	this->_arr = NULL;
	*this = obj; 
}

template<class T>
Array<T>::~Array()
{
	if (this->_length > 0)
		delete [] this->_arr;
}

template<class T>
T &Array<T>::operator[](int index)
{
	if (index >= _length || index < 0)
		throw OutOfRange();
	else
		return (this->_arr[index]);
}

template<class T>
const char* Array<T>::OutOfRange::what() const throw()
{
	return ("Index is out of range");
}

template<class T>
int Array<T>::size() const
{
	return (this->_length);
}



