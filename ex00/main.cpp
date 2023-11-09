/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <eelasam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:00:42 by eelasam           #+#    #+#             */
/*   Updated: 2023/11/09 09:51:46 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <deque>
#include <list>

#include "easyfind.hpp"

int main()
{
    std::vector<int> myContainer;
    for (int i = 0; i < 10; ++i)
    {
        myContainer.push_back(i * 2);//make it full with ivin Nr.
        std::cout << "vector Container index [" << i << "] = " << myContainer[i] << std::endl;
    }
    try
    {
        int valueToFind = 4;
        int index = easyfind(myContainer, valueToFind);
        std::cout << "\nValue " << valueToFind << " found at index: " << index << std::endl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl << e.what() << " vector"<< std::endl << std::endl;
    }
    
    std::cout << "*******************" << std::endl;
    std::deque<int> dequeContainer;
    for (int i = 0; i < 10; ++i)
    {
        dequeContainer.push_back(i * 2); //make it full with ivin Nr.
        std::cout << "deque Container index [" << i << "] = " << dequeContainer[i] << std::endl;
    }
    try
    {
        int valueToFind = 10;
        int index = easyfind(dequeContainer, valueToFind);
        std::cout << "\nValue " << valueToFind << " found at index: " << index << std::endl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl <<e.what() << " deque" <<std::endl << std::endl;
    }

    std::cout << "*******************" << std::endl;
    std::list<int> listContainer;
    for (int i = 0; i < 10; ++i)
    {
        listContainer.push_back(i * 2); //make it full with ivin Nr.
    }
    
    int index = 0;
    for (std::list<int>::iterator it = listContainer.begin(); it != listContainer.end(); ++it, ++index)
    {
        std::cout << "listContainer index[" << index << "] = " << *it << std::endl;
    }
    
    try
    {
        int valueToFind = 2;
        int index = easyfind(listContainer, valueToFind);
        std::cout << "\nValue " << valueToFind << " found at index: " << index << std::endl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl << e.what() << " list" << std::endl << std::endl;
    }
    std::cout << "*******************" << std::endl;

    return 0;    
}
