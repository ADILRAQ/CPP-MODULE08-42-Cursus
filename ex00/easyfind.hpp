/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:12:39 by araqioui          #+#    #+#             */
/*   Updated: 2023/10/05 11:26:08 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
#include <list>

template <typename Container> bool	easyfind(Container container, int integerToFinf)
{
	typename Container::iterator	it = std::find(container.begin(), container.end(), integerToFinf);

	return (it == container.end() ? false : true);
}
