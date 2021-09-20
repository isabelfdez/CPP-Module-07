/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 22:56:05 by user42            #+#    #+#             */
/*   Updated: 2021/09/20 17:43:30 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


#define MAX_VAL 4
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 10;
        numbers[i] = value;
        mirror[i] = value;
		std::cout << numbers[i] << ' ';
    }
    std::cout << '\n';
    //SCOPE
    {
        Array<int> tmp = numbers;
        for (int i = 0; i < MAX_VAL; i++)
	    	std::cout << tmp[i] << ' ';
        Array<int> test(numbers);
    }
    std::cout << '\n';
    std::cout << "The number of elements in the array is " << numbers.size() << std::endl;

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    Array<int> tmp2 = numbers;
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand() % 10;
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
		std::cout << numbers[i] << ' ' << tmp2[i] <<  std::endl;
    }
    Array<int>  test;
    try
    {
        test[4] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    delete [] mirror;//
    return 0;
}