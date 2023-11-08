/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <eelasam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:02:37 by eelasam           #+#    #+#             */
/*   Updated: 2023/11/08 11:43:00 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <exception>
#include <algorithm>
#include <stdexcept>

class Span {
    private:
        std::vector<int> _numbers;
        unsigned int _max_size;
    public:
        Span();
        Span(unsigned int N);
        ~Span();
        
        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
        
        Span(const Span& other);
        Span& operator=(const Span& other);

         void printValues() const;
         unsigned int size() const;
         int operator[](unsigned int index) const;

        class CapacityException : public std::exception
        {
            const char* what() const throw()
            { return "Span capacity exceeded."; }
        };
        class SpanException : public std::exception
        {
            const char* what() const throw()
            { return "Not enough numbers to find a span."; }
        };

};
