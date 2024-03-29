/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:15:35 by araqioui          #+#    #+#             */
/*   Updated: 2023/10/06 14:45:45 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Orthodox Canonical Form

Span::Span(void) : length(0)
{
}

Span::~Span(void)
{
}

Span::Span(const Span &obj)
{
	*this = obj;
}

Span	&Span::operator = (const Span &source)
{
	if (this != &source)
	{
		length = source.length;
		vec.clear();
		vec.shrink_to_fit();
		vec = source.vec;
	}
	return (*this);
}

// Param Constructor

Span::Span(unsigned int len) : length(len)
{
	if (static_cast<int>(length) <= 0)
		throw std::string("Error: Enter a valid number");
}

// Implemented Methods

void	Span::addNumber(int value)
{
	if (vec.size() == length)
		throw std::string("Error: adding out of range");
	vec.push_back(value);
}

int	Span::shortestSpan(void)
{
	size_t	size = vec.size();
	size_t	i = 0;
	size_t	j;
	int		res = INT_MAX;

	if (vec.size() < 2)
		throw std::string("Error: Not enough elements");
	while (i < size - 1)
	{
		j = i;
		while (++j < size)
			res = (abs(vec[i] - vec[j]) < res) ? abs(vec[i] - vec[j]) : res;
		i++;
	}
	return (res);
}

int	Span::longestSpan(void)
{
	size_t	size = vec.size();
	size_t	i = 0;
	size_t	j;
	int		res = 0;

	if (vec.size() < 2)
		throw std::string("Error: Not enough elements");
	while (i < size - 1)
	{
		j = i;
		while (++j < size)
			res = (abs(vec[i] - vec[j]) > res) ? abs(vec[i] - vec[j]) : res;
		i++;
	}
	return (res);
}

void	Span::print(void)
{
	std::vector<int>::iterator	it = vec.begin();

	std::cout << "Values: ";
	while (it != vec.end())
		std::cout << *(it++) << " ";
	std::cout << std::endl;
}
