/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:36:18 by araqioui          #+#    #+#             */
/*   Updated: 2023/10/06 10:48:51 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

class Span {
	private:
		std::vector<int>	vec;
		unsigned int		length;

	public:
		// Orthodox Canonical Form
		Span(void);
		~Span(void);
		Span(const Span &obj);
		Span	&operator = (const Span &source);

		// Param Constructor;
		Span(unsigned int len);

		// Implemented Methods
		void	addNumber(int value);
		int		shortestSpan(void);
		int		longestSpan(void);
		void	fastFill(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		void	print(void);
};
