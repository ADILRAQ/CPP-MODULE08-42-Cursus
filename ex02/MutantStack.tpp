/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:40:32 by araqioui          #+#    #+#             */
/*   Updated: 2023/10/06 12:38:47 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "MutantStack.hpp"

// Orthodox Canonical Form

template <typename T> MutantStack<T>::MutantStack(void)
{
}

template <typename T> MutantStack<T>::~MutantStack(void)
{
}

template <typename T> MutantStack<T>::MutantStack(const MutantStack &obj)
{
	*this = obj;
}

template <typename T> MutantStack<T>   &MutantStack<T>::operator = (const MutantStack &source)
{
	if (this != &source)
		this->c = source.c;
	return (*this);
}

// Implemented Method

template <typename T> typename std::deque<T>::iterator  MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template <typename T> typename std::deque<T>::iterator  MutantStack<T>::end(void)
{
	return (this->c.end());
}

template <typename T> typename std::deque<T>::const_iterator  MutantStack<T>::cbegin(void)
{
	return (this->c.cbegin());
}

template <typename T> typename std::deque<T>::const_iterator  MutantStack<T>::cend(void)
{
	return (this->c.cend());
}

template <typename T> typename std::deque<T>::reverse_iterator	MutantStack<T>::rbegin(void)
{
	return (this->c.rbegin());
}

template <typename T> typename std::deque<T>::reverse_iterator	MutantStack<T>::rend(void)
{
	return (this->c.rend());
}

template <typename T> typename std::deque<T>::const_reverse_iterator	MutantStack<T>::crbegin(void)
{
	return (this->c.crbegin());
}

template <typename T> typename std::deque<T>::const_reverse_iterator	MutantStack<T>::crend(void)
{
	return (this->c.crend());
}
