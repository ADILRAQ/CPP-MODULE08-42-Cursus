/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:55:29 by araqioui          #+#    #+#             */
/*   Updated: 2023/10/05 11:11:33 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T, std::vector<T> > {
	private:
		std::vector<T>								&vec;

	public:
		// Iterator attribute
		typedef typename std::vector<T>::iterator		iterator;
		typedef typename std::vector<T>::const_iterator	const_iterator;

		// Orthodox Canonical Form
		MutantStack(void);
		~MutantStack(void);
		MutantStack(const MutantStack &obj);
		MutantStack	&operator = (const MutantStack &source);

		// Implemented Methods
		typename std::vector<T>::iterator		begin(void);
		typename std::vector<T>::iterator		end(void);
		typename std::vector<T>::const_iterator	cbegin(void);
		typename std::vector<T>::const_iterator	cend(void);
};

#include "MutantStack.tpp"
