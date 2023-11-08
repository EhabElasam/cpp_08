/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <eelasam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:02:48 by eelasam           #+#    #+#             */
/*   Updated: 2023/11/08 12:58:54 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
# include <iostream>
int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);

//sp.printValues();

std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;

// for (unsigned int i = 0; i < sp.size(); ++i)
// {
//     std::cout << "sp[" << i << "] = " << sp[i] << std::endl;
// }

return 0;
}
