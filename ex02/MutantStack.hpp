/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:55:29 by araqioui          #+#    #+#             */
/*   Updated: 2023/10/06 12:44:46 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		// Iterator attribute
		typedef typename std::deque<T>::iterator				iterator;
		typedef typename std::deque<T>::const_iterator			const_iterator;
		typedef typename std::deque<T>::reverse_iterator		reverse_iterator;
		typedef typename std::deque<T>::const_reverse_iterator	const_reverse_iterator;

		// Orthodox Canonical Form
		MutantStack(void);
		~MutantStack(void);
		MutantStack(const MutantStack &obj);
		MutantStack	&operator = (const MutantStack &source);

		// Implemented Methods
		iterator				begin(void);
		iterator				end(void);
		const_iterator			cbegin(void);
		const_iterator			cend(void);
		reverse_iterator		rbegin(void);
		reverse_iterator		rend(void);
		const_reverse_iterator	crbegin(void);
		const_reverse_iterator	crend(void);
};

#include "MutantStack.tpp"
