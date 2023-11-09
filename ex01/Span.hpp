/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <eelasam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:02:37 by eelasam           #+#    #+#             */
/*   Updated: 2023/11/09 15:12:20 by eelasam          ###   ########.fr       */
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
        
        // template <typename Iterator>
        // void addNumberRange(Iterator begin, Iterator end);
        /* template <typename Iterator>
        void addNumberRange(Iterator begin, Iterator end)
        {
            while (begin != end)
            {
                
                addNumber(*begin);
                ++begin;
            }
        }; */

        template <typename Iterator>
        void addNumberRange(Iterator begin, Iterator end) {
            size_t distance = static_cast<size_t>(std::distance(begin, end));
            if (distance > _max_size - _numbers.size())
                throw CapacityException();
            _numbers.insert(_numbers.end(), begin, end);
            };
        
        void fillWithRandomNumbers(int count);

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
            public:
            const char* what() const throw()
            { return "No span can be found."; }
        };
};
