/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:10:00 by araqioui          #+#    #+#             */
/*   Updated: 2023/10/05 11:38:51 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "MutantStack.hpp"

// Orthodox Canonical Form

template <typename T> MutantStack<T>::MutantStack(void) : vec(this->c)
{
}

template <typename T> MutantStack<T>::~MutantStack(void)
{
}

template <typename T> MutantStack<T>::MutantStack(const MutantStack &obj) : vec(this->c)
{
    *this = obj;
}

template <typename T> MutantStack<T>   &MutantStack<T>::operator = (const MutantStack &source)
{
    if (this != &source)
        vec = source.vec;
    return (*this);
}

// Implemented Method

template <typename T> typename std::vector<T>::iterator  MutantStack<T>::begin(void)
{
    return (this->c.begin());
}

template <typename T> typename std::vector<T>::iterator  MutantStack<T>::end(void)
{
    return (this->c.end());
}

template <typename T> typename std::vector<T>::const_iterator  MutantStack<T>::cbegin(void)
{
    return (this->c.cbegin());
}

template <typename T> typename std::vector<T>::const_iterator  MutantStack<T>::cend(void)
{
    return (this->c.cend());
}
