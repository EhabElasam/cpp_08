/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <eelasam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:02:24 by eelasam           #+#    #+#             */
/*   Updated: 2023/11/08 11:43:27 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <limits>

Span::Span() : _max_size(7)
{}
Span::Span(unsigned int N) : _max_size(N)
{}

Span::~Span()
{}

Span::Span(const Span& other) : _numbers(other._numbers) , _max_size(other._max_size)
{}

Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        _max_size = other._max_size;
        _numbers = other._numbers; 
    }
    return *this;
}

unsigned int Span::size() const
{ return _numbers.size(); }
int Span::operator[](unsigned int index) const
{
        if (index >= _numbers.size())
        {
            throw std::out_of_range("Index out of range");
        }
        return _numbers[index];
}

void Span::addNumber(int number)
{
    if (_numbers.size() >= _max_size)
        throw CapacityException();
    _numbers.push_back(number);
}

int Span::shortestSpan()
{
    if (_numbers.size() < 2)
        throw SpanException();

    std::vector<int> sorted_numbers(_numbers);
    std::sort(sorted_numbers.begin(), sorted_numbers.end());

    int shortest = std::numeric_limits<int>::max();
    for (size_t i = 0; i < sorted_numbers.size() - 1; ++i)
    {
        int span = sorted_numbers[i + 1] - sorted_numbers[i];
        if (span < shortest)
            shortest = span;
    }
    return shortest;
}

int Span::longestSpan()
{
    if (_numbers.size() < 2)
        throw SpanException();

    int min = *std::min_element(_numbers.begin(), _numbers.end());
    int max = *std::max_element(_numbers.begin(), _numbers.end());

    return max - min;
}
void Span::printValues() const
{
    std::cout << "Span values: ";
    for (size_t i = 0; i < _numbers.size(); i++)
    {
        std::cout << _numbers[i];
        if (i < _numbers.size() - 1)
            std::cout << ", ";
    }
    std::cout << std::endl;
}
