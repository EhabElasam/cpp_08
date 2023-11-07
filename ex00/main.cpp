/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <eelasam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:00:42 by eelasam           #+#    #+#             */
/*   Updated: 2023/11/07 17:02:31 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include "easyfind.hpp"

int main()
{
    std::vector<int> myContainer;
    for (int i = 0; i < 10; ++i)
    {
        myContainer.push_back(i * 2); //make it full with ivin Nr.
    }

    // try to find the element.
    try {
        int valueToFind = 3;
        int index = easyfind(myContainer, valueToFind);
        std::cout << "Value " << valueToFind << " found at index: " << index << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
