/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <eelasam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:02:48 by eelasam           #+#    #+#             */
/*   Updated: 2023/11/09 16:14:14 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
# include <iostream>
#include <cstdlib>

int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);



std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;

//sp.printValues();

// for (unsigned int i = 0; i < sp.size(); ++i)
// {
//     std::cout << "sp[" << i << "] = " << sp[i] << std::endl;
// }

{
    try
    {
        Span sp = Span(0);
        // sp.addNumber(6);
        // sp.addNumber(3);
        // sp.addNumber(17);
        // sp.addNumber(9);
        // sp.addNumber(11);
        // sp.addNumber(17);



        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

{
    Span sp = Span(10000);
    std::srand(time(0));
    std::vector<int> randomNumbers(10000);
    std::generate(randomNumbers.begin(), randomNumbers.end(), std::rand); 
    
    try {
        sp.addNumberRange(randomNumbers.begin(), randomNumbers.end());
        //sp.printValues();
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    } 
}

{
    Span sp = Span(10000);
    try
    {
        sp.fillWithRandomNumbers(10000);
        //sp.printValues();
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    } 
    
}

return 0;
}
