/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <eelasam@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:03:28 by eelasam           #+#    #+#             */
/*   Updated: 2023/11/08 20:08:43 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    // Typedefs für die Iteratoren
    typedef typename std::deque<T>::iterator iterator;
    typedef typename std::deque<T>::const_iterator const_iterator;

    // Konstruktoren, Destruktoren und Zuweisungsoperatoren
    MutantStack();
    ~MutantStack();
    MutantStack(const MutantStack& other);
    MutantStack& operator=(const MutantStack& other);

    // Funktionen, um den Anfang und das Ende des internen Containers zu erhalten
    iterator begin();
    const_iterator begin() const;
    iterator end();
    const_iterator end() const;
};

#include "MutantStack.tpp"
