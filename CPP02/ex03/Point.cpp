/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:58:36 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/23 15:01:50 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float fx, const float fy) : x(fx), y(fy) {}

//wow le pre init
Point::Point(const Point& other) : x(other.x), y(other.y) {}

Point::~Point() {}

Fixed Point::getx() const {
    return(x);
}

Fixed Point::gety() const {
    return (y);
}
