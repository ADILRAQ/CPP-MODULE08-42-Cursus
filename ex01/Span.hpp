/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:36:18 by araqioui          #+#    #+#             */
/*   Updated: 2023/10/06 15:02:52 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

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
		void	print(void);
		template <typename Iterator> void	fastFill(Iterator begin, Iterator end)
		{
			Iterator		keep = begin;
			unsigned int	rest = length - vec.size();
			int				iteratorLength = 0;

			while (keep != end)
			{
				iteratorLength++;
				keep++;
			}
			if (!rest || iteratorLength <= 0 || static_cast<unsigned int>(iteratorLength) > rest)
				throw std::string("Error: Can't add more elements");
			while (begin != end)
				vec.push_back(*begin++);
		}
};
